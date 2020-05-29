
#include <esp_wifi.h>
#include <esp_event_loop.h>
#include <esp_log.h>
#include <esp_system.h>
#include <sys/param.h>
#include <esp_http_server.h>

#include "resources/index_html.h"
#include "resources/main_css.h"
#include "resources/scripts_js.h"

extern "C" esp_err_t
html_get_index(httpd_req_t *req)
{
    httpd_resp_send(req, index_html, strlen(index_html));
    return ESP_OK;
}

extern "C" esp_err_t
html_get_css(httpd_req_t *req)
{
    httpd_resp_send(req, main_css, strlen(main_css));
    return ESP_OK;
}

extern "C" esp_err_t
html_get_js(httpd_req_t *req)
{
    httpd_resp_send(req, scripts_js, strlen(scripts_js));
    return ESP_OK;
}