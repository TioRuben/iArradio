#include <Arduino.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include <WiFiManager.h>

#include "epaper.h"
#include "icy_stream.h"
#include "ntp_time.h"
#include "battery_capacity.h"

long unsigned int old_millis = 0;
uint8_t cycles = 0;

void setup()
{
  WiFiManager wifiManager;
  init_display();
  Serial.begin(115200);
  wifiManager.autoConnect("iArradio", "iArradio123");
  init_ntp();
  update_ntp();
  main_interface(ntp_get_date(), ntp_get_hour(), ntp_get_day_of_week(), "35", get_battery_capacity());
  set_epaper_station(init_audio());
}

void task_ntp(void *parameter)
{
  ntp_update_rutine();
  vTaskDelete(NULL);
}

void task_epaper_battery(void *parameter)
{
  set_epaper_battery(get_battery_capacity());
  vTaskDelete(NULL);
}

void task_audio_stream(void *parameter)
{
  audio_rutine();
  vTaskDelete(NULL);
}

void loop()
{
  xTaskCreate(task_audio_stream, "TaskAudio", 100000, NULL, configMAX_PRIORITIES - 4, NULL);
  if (millis() - old_millis > 5000)
  {
    old_millis = millis();
    cycles++;
    if (cycles >= 12)
    {
      cycles = 0;
      xTaskCreate(task_epaper_battery, "TaskEpaper", 50000, NULL, 1, NULL);
    }
    else
    {
      xTaskCreate(task_ntp, "TaskNTP", 50000, NULL, 1, NULL);
    }
  }
}
