#define ICY_STREAM_LOADED

#ifndef EPAPER_LOADED
#include "../epaper/epaper.h"
#endif

#include "Audio.h"

#define BCLK_PIN 26
#define LRC_PIN 25
#define DOUT_PIN 19

String init_audio();
void audio_rutine();