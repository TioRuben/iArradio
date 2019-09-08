#include "wifi_hardware.hpp"

void init_wifi()
{
    WiFiManager wifiManager;
    wifiManager.autoConnect(WIFI_AP_NAME, WIFI_AP_PASS);
}