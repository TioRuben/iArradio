#include "user_input_buttons.hpp"

EasyButton home_button(HOME_BUTTON, DEBOUNCETIME);
EasyButton prev_button(PREV_BUTTON, DEBOUNCETIME);
EasyButton next_button(NEXT_BUTTON, DEBOUNCETIME);

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
    increase_volume(-1);
}

void handle_next_button()
{
    increase_volume(1);
}

void handle_home_timeout()
{
    power_off();
}

void handle_home()
{
    Serial.println("Change mode");
}