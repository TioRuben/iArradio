#include <Arduino.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include "settings.hpp"
#include "epaper.hpp"
#include "translations.hpp"

void weather_update_rutine();
char convert_icon(String weather_icon);