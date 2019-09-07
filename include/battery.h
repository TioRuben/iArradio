#include <Arduino.h>
#include "hal.h"

#define BATTERY_MIN_V 3.0
#define BATTERY_MAX_V 4.0

uint8_t get_battery_capacity();