#include "controls.h"

void power_off()
{
    audio_stop();
    logo_screen("Apagado");
    esp_deep_sleep_start();
}

void low_battery()
{
    audio_stop();
    logo_screen("Batería Baja");
    esp_deep_sleep_start();
}