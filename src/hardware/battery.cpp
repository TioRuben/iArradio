#include "battery.h"

uint8_t get_battery_capacity()
{
    double bat_volt = analogRead(BAT_VOLTAGE) * 0.001612; // 2*3.3/4095
    uint8_t value = (bat_volt - BATTERY_MIN_V) * 100 / (BATTERY_MAX_V - BATTERY_MIN_V);
    if (value > 100)
    {
        value = 100;
    }
    if (value < 0)
    {
        value = 0;
    }
    return value;
}