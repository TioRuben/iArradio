#include "epaper.h"
#include "Audio.h"

#define BCLK_PIN 26
#define LRC_PIN 25
#define DOUT_PIN 19

String init_audio();
void IRAM_ATTR audio_rutine();
void increase_volume(int8_t amount);