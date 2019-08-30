/**
 * Dont forget
 * SetPinout(26, 25, 19);
 * */

#include <Arduino.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include <WiFiManager.h>

#include "epaper/epaper.h"
#include "audio/icy_stream.h"
#include "external_data/ntp_time.h"
#include "hardware_data/battery_capacity.h"

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

void task_audio(void *parameter)
{
  audio_rutine();
  vTaskDelete(NULL);
}

void loop()
{
  audio_rutine();
  if (millis() - old_millis > 5000)
  {
    // xTaskCreate(
    //     task_ntp,
    //     "NTPUPDATE",
    //     10000,
    //     NULL,
    //     1,
    //     NULL);
    old_millis = millis();
    cycles++;
    if (cycles >= 12)
    {
      cycles = 0;
      set_epaper_battery(get_battery_capacity());
    }
    else
    {
      ntp_update_rutine();
    }
  }
  // xTaskCreate(
  //     task_audio,
  //     "AUDIO",
  //     10000,
  //     NULL,
  //     1,
  //     NULL);
}