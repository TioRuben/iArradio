#include <Arduino.h>
#include <EasyButton.h>
#include "icy_stream.hpp"
#include "epaper.hpp"
#include "controls.hpp"
#include "settings.hpp"
#include "hal.hpp"

void configure_buttons();
void buttons_rutine();
void handle_prev_button();
void handle_next_button();
void handle_home_timeout();
void handle_home();
