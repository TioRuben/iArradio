#include <Arduino.h>
#include <EasyButton.h>
#include "ntp_time.hpp"
#include "weather.hpp"
#include "battery.hpp"
#include "icy_stream.hpp"
#include "user_input_buttons.hpp"
#include "wifi_hardware.hpp"
#include "eeprom_settings.hpp"

void task_ntp(void *parameter);
void task_weather(void *parameter);
void task_epaper_battery(void *parameter);
void task_audio_stream(void *parameter);
void task_stream_title(void *parameter);
void task_epaper_volume(void *parameter);
void task_epaper_cursor(void *parameter);
void task_epaper_station_number(void *parameter);
void task_epaper_rssi(void *parameter);
void task_eeprom_volume(void *parameter);
void task_eeprom_station(void *parameter);
void set_updating(bool value);