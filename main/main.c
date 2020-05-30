/* Simple HTTP Server Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <esp_wifi.h>
#include <esp_event_loop.h>
#include <esp_log.h>
#include <esp_system.h>
#include <nvs_flash.h>
#include <sys/param.h>

#include <esp_http_server.h>

/* A simple example that demonstrates how to create GET and POST
 * handlers for the web server.
 * The examples use simple WiFi configuration that you can set via
 * 'make menuconfig'.
 * If you'd rather not, just change the below entries to strings
 * with the config you want -
 * ie. #define EXAMPLE_WIFI_SSID "mywifissid"
*/
#define EXAMPLE_WIFI_SSID CONFIG_WIFI_SSID
#define EXAMPLE_WIFI_PASS CONFIG_WIFI_PASSWORD

static const char *TAG = "APP";
void show_connect_info(const char *ipStr);

esp_err_t display_text_get_handler(httpd_req_t *req);
esp_err_t display_clear_get_handler(httpd_req_t *req);
esp_err_t display_post_image(httpd_req_t *req);
esp_err_t html_get_index(httpd_req_t *req);
esp_err_t html_get_css(httpd_req_t *req);
esp_err_t html_get_js(httpd_req_t *req);


void display_task(void *arg);

const httpd_uri_t text_uri = {
    .uri = "/api/v1/display/text",
    .method = HTTP_GET,
    .handler = display_text_get_handler,
};

const httpd_uri_t clear_uri = {
    .uri = "/api/v1/display/clear",
    .method = HTTP_GET,
    .handler = display_clear_get_handler,
};

const httpd_uri_t index_uri = {
    .uri = "/index.html",
    .method = HTTP_GET,
    .handler = html_get_index,
};

const httpd_uri_t default_uri = {
    .uri = "/",
    .method = HTTP_GET,
    .handler = html_get_index,
};

const httpd_uri_t css_uri = {
    .uri = "/main.css",
    .method = HTTP_GET,
    .handler = html_get_css,
};

const httpd_uri_t js_uri = {
    .uri = "/scripts.js",
    .method = HTTP_GET,
    .handler = html_get_js,
};

const httpd_uri_t image_uri = {
    .uri = "/api/v1/display/image",
    .method = HTTP_POST,
    .handler = display_post_image,
};

httpd_handle_t start_webserver(void)
{
    httpd_handle_t server = NULL;
    httpd_config_t config = HTTPD_DEFAULT_CONFIG();
    
    // Start the httpd server
    ESP_LOGI(TAG, "Starting server on port: '%d'", config.server_port);
    if (httpd_start(&server, &config) == ESP_OK)
    {
        // Set URI handlers
        ESP_LOGI(TAG, "Registering URI handlers");
        httpd_register_uri_handler(server, &text_uri);
        httpd_register_uri_handler(server, &clear_uri);
        httpd_register_uri_handler(server, &index_uri);
        httpd_register_uri_handler(server, &image_uri);
        httpd_register_uri_handler(server, &css_uri);
        httpd_register_uri_handler(server, &js_uri);
        httpd_register_uri_handler(server, &default_uri);
        return server;
    }

    ESP_LOGI(TAG, "Error starting server!");
    return NULL;
}

void stop_webserver(httpd_handle_t server)
{
    // Stop the httpd server
    httpd_stop(server);
}

static esp_err_t event_handler(void *ctx, system_event_t *event)
{
    httpd_handle_t *server = (httpd_handle_t *)ctx;
    /* For accessing reason codes in case of disconnection */
    system_event_info_t *info = &event->event_info;

    switch (event->event_id)
    {
    case SYSTEM_EVENT_STA_START:
        ESP_LOGI(TAG, "SYSTEM_EVENT_STA_START");
        ESP_ERROR_CHECK(esp_wifi_connect());
        break;
    case SYSTEM_EVENT_STA_GOT_IP:
        ESP_LOGI(TAG, "SYSTEM_EVENT_STA_GOT_IP");
        char * ipAddrStr = ip4addr_ntoa(&event->event_info.got_ip.ip_info.ip);
        ESP_LOGI(TAG, "Got IP: '%s'", ipAddrStr);

        /* Start the web server */
        if (*server == NULL)
        {
            *server = start_webserver();
        }
        show_connect_info(ipAddrStr);
        break;
    case SYSTEM_EVENT_STA_DISCONNECTED:
        ESP_LOGI(TAG, "SYSTEM_EVENT_STA_DISCONNECTED");
        ESP_LOGE(TAG, "Disconnect reason : %d", info->disconnected.reason);
        if (info->disconnected.reason == WIFI_REASON_BASIC_RATE_NOT_SUPPORT)
        {
            /*Switch to 802.11 bgn mode */
            esp_wifi_set_protocol(ESP_IF_WIFI_STA, WIFI_PROTOCOL_11B | WIFI_PROTOCOL_11G | WIFI_PROTOCOL_11N);
        }
        ESP_ERROR_CHECK(esp_wifi_connect());

        /* Stop the web server */
        if (*server)
        {
            stop_webserver(*server);
            *server = NULL;
        }
        break;
    default:
        break;
    }
    return ESP_OK;
}

static void initialise_wifi(void *arg)
{
    tcpip_adapter_init();
    ESP_ERROR_CHECK(esp_event_loop_init(event_handler, arg));
    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));
    ESP_ERROR_CHECK(esp_wifi_set_storage(WIFI_STORAGE_RAM));
    wifi_config_t wifi_config = {
        .sta = {
            .ssid = EXAMPLE_WIFI_SSID,
            .password = EXAMPLE_WIFI_PASS,
        },
    };
    ESP_LOGI(TAG, "Setting WiFi configuration SSID %s...", wifi_config.sta.ssid);
    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
    ESP_ERROR_CHECK(esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config));
    ESP_ERROR_CHECK(esp_wifi_start());
}

void app_main()
{
    static httpd_handle_t server = NULL;
    ESP_ERROR_CHECK(nvs_flash_init());
    initialise_wifi(&server);
    xTaskCreate(display_task, "display_task", 1024+512, NULL, 10, NULL);
}
