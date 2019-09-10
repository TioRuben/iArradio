#include <WiFi.h>
#include <WiFiManager.h>
#include "epaper.hpp"
#include "translations.hpp"
#include "settings.hpp"

void init_wifi();
int get_wifi_rssi();
void configModeCallback(WiFiManager *myWiFiManager);