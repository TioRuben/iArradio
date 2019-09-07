#include <Arduino.h>
#include <EasyButton.h>
#include "ntp_time.h"
#include "battery.h"
#include "icy_stream.h"
#include "user_input_buttons.h"

void task_ntp(void *parameter);
void task_epaper_battery(void *parameter);
void task_audio_stream(void *parameter);
void task_stream_title(void *parameter);
void task_epaper_volume(void *parameter);