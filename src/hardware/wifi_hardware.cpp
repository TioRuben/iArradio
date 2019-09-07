#include "wifi_hardware.h"

void init_wifi()
{
    WiFiManager wifiManager;
    wifiManager.autoConnect("iArradio", "iArradio123");
}