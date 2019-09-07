#include "epaper.h"
#include "Audio.h"
#include "hal.h"

String init_audio();
void IRAM_ATTR audio_rutine();
void increase_volume(int8_t amount);
void audio_stop();