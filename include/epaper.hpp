#include <Arduino.h>
#include <SPI.h>
#define ENABLE_GxEPD2_GFX 0
#define DISABLE_DIAGNOSTIC_OUTPUT
#include <GxEPD2_BW.h>
// #include <GxEPD2_3C.h>
#include "hal.hpp"

void init_display();
void weathericonsTest();
void main_interface();
void logo_screen(String message);
void set_epaper_time(String time);
void set_epaper_date(String date, String dayOfWeek);
void set_epaper_meteo(String temperature);
void set_epaper_station(String station);
void set_epaper_battery(uint8_t percentage);
void subrutine_time(String time);
void subrutine_temperature(String temperature);
void subrutine_date(String date, String dayOfWeek);
void subrutine_station(String station);
void subrutine_battery(uint8_t percentage);
void subrutine_volume(uint8_t value);
void set_epaper_volume(uint8_t value);
void subrutine_cursor_volume(bool volume_mode);
void subrutine_cursor_station(bool volume_mode);
void set_epaper_cursor(bool volume_mode);