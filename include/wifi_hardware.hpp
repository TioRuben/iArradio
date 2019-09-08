#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include <WiFiManager.h>
#include "settings.hpp"

void init_wifi();
int get_wifi_rssi();