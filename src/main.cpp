#include <Arduino.h>
#include "wifi_hardware.h"
#include "epaper.h"
#include "icy_stream.h"
#include "ntp_time.h"
#include "battery.h"
#include "user_input_buttons.h"
#include "tasks.h"
#include "hal.h"

void setup()
{
  Serial.begin(115200);
  init_display();
  main_interface();
  init_wifi();
  init_ntp();
  set_epaper_station(init_audio());
  configure_buttons();
  xTaskCreate(task_ntp, "TaskNTP", 50000, NULL, 1, NULL);
  xTaskCreate(task_epaper_battery, "TaskEpaperBattery", 50000, NULL, 1, NULL);
  increase_volume(0);
}

void loop()
{
  audio_rutine();
  buttons_rutine();
}
