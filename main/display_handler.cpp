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
constexpr int ParamBuffSize = 400;

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
    MyPainter painter(display);
    params.Reset();
    ApplyCommonParameters(req, params, painter);
    draw_text(painter, params);

    const char *resp_str = "Done";
    httpd_resp_send(req, resp_str, strlen(resp_str));
    return ESP_OK;
}

extern "C" esp_err_t
display_clear_get_handler(httpd_req_t *req)
{
    MyPainter painter(display);
    params.Reset();
    ApplyCommonParameters(req, params, painter);
    display.Fill(painter.GetColor());

    const char *resp_str = "Done";
    httpd_resp_send(req, resp_str, strlen(resp_str));
    return ESP_OK;
}

extern "C" void display_task(void *arg)
{
    ESP_LOGI(TAG, "Initializing I2C");
    Mcucpp::EspI2c::Init();
    ESP_LOGI(TAG, "I2C initialized");

    vTaskDelay(100 / portTICK_RATE_MS);
    display.Init();

    while (true)
    {
        vTaskDelay(1000 / portTICK_RATE_MS);
        display.Flush();
    }
}