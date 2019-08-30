#include "battery_capacity.h"

uint8_t get_battery_capacity()
{
    // uint16_t value = analogRead(35);
    // Serial.printf("BAT CAPACITY %f%% | VOLTAGE %fV\n", (value - 1737) * 0.11507, value * 0.0016);
    return (analogRead(35) - 1737) * 0.11507;
}