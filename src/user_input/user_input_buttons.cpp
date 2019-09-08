#include "user_input_buttons.hpp"
#include "tasks.hpp"

EasyButton home_button(HOME_BUTTON, DEBOUNCETIME);
EasyButton prev_button(PREV_BUTTON, DEBOUNCETIME);
EasyButton next_button(NEXT_BUTTON, DEBOUNCETIME);

bool volume_mode = false;

void configure_buttons()
{
    home_button.begin();
    prev_button.begin();
    next_button.begin();

    home_button.onPressed(handle_home);
    home_button.onPressedFor(HOLD_TIMEOUT, handle_home_timeout);
    prev_button.onPressed(handle_prev_button);
    next_button.onPressed(handle_next_button);
}

void buttons_rutine()
{
    home_button.read();
    prev_button.read();
    next_button.read();
}

void handle_prev_button()
{
    if (volume_mode)
    {
        increase_volume(-1);
    }
    else
    {
        change_station(-1);
    }
}

void handle_next_button()
{
    if (volume_mode)
    {
        increase_volume(1);
    }
    else
    {
        change_station(1);
    }
}

void handle_home_timeout()
{
    power_off();
}

void handle_home()
{
    volume_mode = !volume_mode;
    xTaskCreate(task_epaper_cursor, "TaskEpaperCursor", 5000, &volume_mode, 1, NULL);
}