#include <esp_wifi.h>
#include <esp_event_loop.h>
#include <esp_log.h>
#include <esp_system.h>
#include <sys/param.h>
#include <esp_http_server.h>

#include "ssd1306.h"
#include "resources.h"
#include "painter.h"
#include "utf8.h"
#include "url_reader.h"

using namespace Mcucpp;
using namespace Mcucpp::Graphics;

static const char *TAG = "DISP";
Ssd1306<EspI2c> display;
using MyPainter = Painter<Ssd1306<EspI2c>>;
constexpr int MaxText = 200;
constexpr int ParamBuffSize = 400; // max URL size is limited to 512

struct Params
{
    int x = 0;
    int y = 0;
    int x2 = 0;
    int y2 = 0;
    int r = 0;
    int font = 0;
    wchar_t text[MaxText] = {0};

    void Reset()
    {
        memset(this, 0, sizeof(*this));
    }
} params;

static char param[ParamBuffSize];

void DecodeText(const char *str, wchar_t *text, size_t maxCount)
{
    UrlReader reader(str);
    using Encoding = Utf8Encoding<wchar_t>;
    wchar_t c = 1;
    for (int i = 0; i < maxCount && c; ++i)
    {
        c = Encoding::Decode(reader);
        text[i] = c;
    }
}

static void ApplyCommonParameters(httpd_req_t *req, Params &params, MyPainter &painter)
{
    char *buf;
    size_t buf_len = httpd_req_get_url_query_len(req) + 1;
    if (buf_len > 1)
    {
        buf = (char *)malloc(buf_len);
        if (httpd_req_get_url_query_str(req, buf, buf_len) == ESP_OK)
        {
            if (httpd_query_key_value(buf, "x", param, ParamBuffSize) == ESP_OK)
            {
                params.x = atoi(param);
                // ESP_LOGI(TAG, "Found URL query parameter => x=%s", param);
            }
            if (httpd_query_key_value(buf, "y", param, ParamBuffSize) == ESP_OK)
            {
                params.y = atoi(param);
                // ESP_LOGI(TAG, "Found URL query parameter => y=%s", param);
            }
            if (httpd_query_key_value(buf, "x2", param, ParamBuffSize) == ESP_OK)
            {
                params.x2 = atoi(param);
                // ESP_LOGI(TAG, "Found URL query parameter => x2=%s", param);
            }
            if (httpd_query_key_value(buf, "y2", param, ParamBuffSize) == ESP_OK)
            {
                params.y2 = atoi(param);
                // ESP_LOGI(TAG, "Found URL query parameter => y2=%s", param);
            }
            if (httpd_query_key_value(buf, "bkcolor", param, ParamBuffSize) == ESP_OK)
            {
                int color = atoi(param);
                painter.SetBackColor(color);
                // ESP_LOGI(TAG, "Found URL query parameter => bkcolor=%s", param);
            }
            if (httpd_query_key_value(buf, "color", param, ParamBuffSize) == ESP_OK)
            {
                int color = atoi(param);
                painter.SetColor(color);
                // ESP_LOGI(TAG, "Found URL query parameter => color=%s", param);
            }
            if (httpd_query_key_value(buf, "font", param, ParamBuffSize) == ESP_OK)
            {
                params.font = atoi(param);
                // ESP_LOGI(TAG, "Found URL query parameter => font=%s", param);
            }
            if (httpd_query_key_value(buf, "mode", param, ParamBuffSize) == ESP_OK)
            {
                if (strcmp(param, "write") == 0)
                {
                    painter.SetOutputMode(MyPainter::WriteMode);
                }
                if (strcmp(param, "xor") == 0)
                {
                    painter.SetOutputMode(MyPainter::XorMode);
                }
                if (strcmp(param, "and") == 0)
                {
                    painter.SetOutputMode(MyPainter::AndMode);
                }
                if (strcmp(param, "andnot") == 0)
                {
                    painter.SetOutputMode(MyPainter::AndNotMode);
                }
                if (strcmp(param, "invert") == 0)
                {
                    painter.SetOutputMode(MyPainter::InvertMode);
                }
                // ESP_LOGI(TAG, "Found URL query parameter => mode=%s", param);
            }
            if (httpd_query_key_value(buf, "text", param, ParamBuffSize) == ESP_OK)
            {
                // ESP_LOGI(TAG, "Found URL query parameter => text=%s", param);
                DecodeText(param, params.text, MaxText);
                // for (int i = 0; i < 20; i++)
                // {
                //     ESP_LOGI(TAG, "char = %d", (int)(params.text[i]));
                // }
            }
        }
        free(buf);
    }
}

template <class StrT>
int NewLineIndex(StrT str)
{
    int index = 0;
    while (char c = *str++)
    {
        if (c == '\r' || c == '\n')
        {
            if (c == '\r' && *str == '\n')
            {
                index++;
            }
            return index;
        }
        index++;
    }
    return -1;
}

void draw_text(MyPainter &painter, Params &params)
{
    auto font = params.font > 0 ? bigFont : smallFont;
    int height = font.GetChar(' ').Height();
    wchar_t *text = params.text;
    int newLineIndex = NewLineIndex(text);
    while (newLineIndex >= 0)
    {
        text[newLineIndex] = 0;
        painter.DrawText(text, params.x, params.y, font);
        text += newLineIndex + 1;
        newLineIndex = NewLineIndex(text);
        params.y += height;
    }

    painter.DrawText(text, params.x, params.y, font);
}

extern "C" esp_err_t
display_text_get_handler(httpd_req_t *req)
{
    ESP_LOGI(TAG, "Draw text");
    MyPainter painter(display);
    params.Reset();
    ApplyCommonParameters(req, params, painter);
    draw_text(painter, params);

    const char *resp_str = "OK";
    httpd_resp_send(req, resp_str, strlen(resp_str));
    return ESP_OK;
}

extern "C" esp_err_t
display_clear_get_handler(httpd_req_t *req)
{
    ESP_LOGI(TAG, "Clear screen");
    MyPainter painter(display);
    params.Reset();
    ApplyCommonParameters(req, params, painter);
    display.Fill(painter.GetColor());

    const char *resp_str = "OK";
    httpd_resp_send(req, resp_str, strlen(resp_str));
    return ESP_OK;
}

struct rect_t
{
    int x = 0;
    int y = 0;
    int w = 0;
    int h = 0;
};

rect_t get_rect_params(httpd_req_t *req)
{
    rect_t rect;
    char *buf;
    size_t buf_len = httpd_req_get_url_query_len(req) + 1;
    if (buf_len > 1)
    {
        buf = (char *)malloc(buf_len);
        if (httpd_req_get_url_query_str(req, buf, buf_len) == ESP_OK)
        {
            if (httpd_query_key_value(buf, "x", param, ParamBuffSize) == ESP_OK)
            {
                rect.x = atoi(param);
            }
            if (httpd_query_key_value(buf, "y", param, ParamBuffSize) == ESP_OK)
            {
                rect.y = atoi(param);
            }
            if (httpd_query_key_value(buf, "w", param, ParamBuffSize) == ESP_OK)
            {
                rect.w = atoi(param);
                if (rect.w < 0)
                {
                    rect.w = 0;
                }
            }
            if (httpd_query_key_value(buf, "h", param, ParamBuffSize) == ESP_OK)
            {
                rect.h = atoi(param);
                if (rect.h < 0)
                {
                    rect.h = 0;
                }
            }
        }
        free(buf);
    }
    return rect;
}

extern "C" esp_err_t display_post_image(httpd_req_t *req)
{
    rect_t image_rect = get_rect_params(req);
    MyPainter painter(display);
    char buf[128];
    int ret, remaining = req->content_len;

    while (remaining > 0)
    {
        if ((ret = httpd_req_recv(req, buf, MIN(remaining, sizeof(buf)))) <= 0)
        {
            if (ret == HTTPD_SOCK_ERR_TIMEOUT)
            {
                continue;
            }
            return ESP_FAIL;
        }
        remaining -= ret;

        int w = std::min(ret, image_rect.w);
        int h = std::min((ret * 8 + image_rect.w - 1) / image_rect.w, image_rect.h);
        RowOrderedBitmap<const uint8_t *> bitmap((const uint8_t *)(buf), w, h);

        painter.DrawBitmap(bitmap, image_rect.x, image_rect.y);
        image_rect.y += bitmap.Height();
    }
    const char *resp_str = "OK";
    httpd_resp_send(req, resp_str, strlen(resp_str));
    return ESP_OK;
}

extern "C" void show_connect_info(const char *ipStr)
{
    MyPainter painter(display);
    painter.Clear();
    painter.DrawText("ESP8266 display", 0, 0, bigFont);
    painter.DrawText("Type this ip address", 0, 16, smallFont);
    painter.DrawText("in your browser:", 0, 24, smallFont);
    painter.DrawText(ipStr, 10, 34, bigFont);
    painter.DrawBitmap(MyPainter::Checker(128,14), 0, 50);
}

extern "C" void display_task(void *arg)
{
    ESP_LOGI(TAG, "Initializing I2C");
    Mcucpp::EspI2c::Init();
    ESP_LOGI(TAG, "I2C initialized");

    vTaskDelay(100 / portTICK_RATE_MS);
    display.Init();

    MyPainter painter(display);
    painter.Clear();
    painter.DrawText("ESP8266 display", 0, 0, bigFont);
    painter.DrawText("Connecting to WiFi...", 0, 24, smallFont);

    painter.DrawBitmap(MyPainter::Checker(128,20), 0, 44);
    while (true)
    {
        vTaskDelay(1000 / portTICK_RATE_MS);
        display.Flush();
    }
}