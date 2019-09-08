#include <Audio.h>
#include "epaper.hpp"
#include "hal.hpp"

void init_audio();
void IRAM_ATTR audio_rutine();
void increase_volume(int8_t amount);
void audio_stop();
void change_station(int8_t direction);