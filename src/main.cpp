#include <Arduino.h>
#include "wifi_hardware.hpp"
#include "eeprom_settings.hpp"
#include "epaper.hpp"
#include "icy_stream.hpp"
#include "ntp_time.hpp"
#include "battery.hpp"
#include "user_input_buttons.hpp"
#include "tasks.hpp"
#include "hal.hpp"

void setup()
{
  Serial.begin(115200);
  init_display();
  init_wifi();
  main_interface();
  init_ntp();
  eeprom_init();
  set_volume(eeprom_get_volume());
  set_station(eeprom_get_station());
  init_audio();
  configure_buttons();
  xTaskCreate(task_epaper_battery, "TaskEpaperBattery", 1500, NULL, tskIDLE_PRIORITY, NULL);
  xTaskCreate(task_epaper_rssi, "TaskEpaperRSSI", 1500, NULL, tskIDLE_PRIORITY, NULL);
  xTaskCreate(task_ntp, "TaskNTP", 1500, NULL, tskIDLE_PRIORITY, NULL);
  xTaskCreate(task_weather, "TaskWEATHER", 35000, NULL, tskIDLE_PRIORITY, NULL);
  handle_home();
}

void loop()
{
  audio_rutine();
  buttons_rutine();
}
