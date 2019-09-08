#include "controls.hpp"

void power_off()
{
    set_updating(true);
    audio_stop();
    logo_screen(POWEROFF);
    sleep(2);
    esp_deep_sleep_start();
}

void low_battery()
{
    set_updating(true);
    audio_stop();
    logo_screen(LOWBATT);
    sleep(2);
    esp_deep_sleep_start();
}