#include "controls.hpp"

void power_off()
{
    audio_stop();
    logo_screen(POWEROFF);
    sleep(2);
    esp_deep_sleep_start();
}

void low_battery()
{
    audio_stop();
    logo_screen(LOWBATT);
    sleep(2);
    esp_deep_sleep_start();
}