#include <Arduino.h>
#include <EasyButton.h>
#include "ntp_time.hpp"
#include "battery.hpp"
#include "icy_stream.hpp"
#include "user_input_buttons.hpp"

void task_ntp(void *parameter);
void task_epaper_battery(void *parameter);
void task_audio_stream(void *parameter);
void task_stream_title(void *parameter);
void task_epaper_volume(void *parameter);
void task_epaper_cursor(void *parameter);