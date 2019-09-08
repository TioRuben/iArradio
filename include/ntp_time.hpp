#include <Arduino.h>
#include <WiFiUdp.h>
#include <NTP.h>
#include "epaper.hpp"
#include "translations.hpp"

void init_ntp();
void update_ntp();
String ntp_get_hour();
String ntp_get_date();
String ntp_get_day_of_week();
uint8_t ntp_get_day_index();
uint8_t ntp_get_minutes();
void ntp_update_rutine();