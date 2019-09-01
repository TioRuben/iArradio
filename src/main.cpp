#include <Arduino.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include <WiFiManager.h>

#include "epaper.h"
#include "icy_stream.h"
#include "ntp_time.h"
#include "battery_capacity.h"
#include "tasks.h"

void setup()
{
  WiFiManager wifiManager;
  init_display();
  Serial.begin(115200);
  wifiManager.autoConnect("iArradio", "iArradio123");
  init_ntp();
  update_ntp();
  main_interface();
  set_epaper_station(init_audio());
  xTaskCreate(task_ntp, "TaskNTP", 50000, NULL, 1, NULL);
  xTaskCreate(task_epaper_battery, "TaskEpaperBattery", 50000, NULL, 1, NULL);
}

void loop()
{
  audio_rutine();
}
