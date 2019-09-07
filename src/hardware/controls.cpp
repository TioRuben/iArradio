#include "controls.h"

void power_off()
{
    audio_stop();
    logo_screen(POWEROFF);
    esp_deep_sleep_start();
}

void low_battery()
{
    audio_stop();
    logo_screen(LOWBATT);
    esp_deep_sleep_start();
}