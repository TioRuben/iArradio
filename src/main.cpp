/**
 * Dont forget
 * SetPinout(26, 25, 19);
 * */

#include <Arduino.h>
#include <WiFi.h>

#include "./epaper/epaper.h"

void setup()
{
  init_display();
  main_interface("24/12/2022", "23:59", "Domingo", "35");
  sleep(3);
  // set_epaper_time("00:00");
  // set_epaper_date("25/12/2022", "Lunes");
  // set_epaper_meteo("-10");
}

void loop()
{
  // put your main code here, to run repeatedly:
}