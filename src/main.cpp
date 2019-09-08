#include <Arduino.h>
#include "wifi_hardware.hpp"
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
  main_interface();
  init_wifi();
  init_ntp();
  init_audio();
  configure_buttons();
  xTaskCreate(task_ntp, "TaskNTP", 50000, NULL, 1, NULL);
  xTaskCreate(task_epaper_battery, "TaskEpaperBattery", 50000, NULL, 1, NULL);
  increase_volume(0);
  handle_home();
}

void loop()
{
  audio_rutine();
  buttons_rutine();
}
