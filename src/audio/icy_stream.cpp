#include "icy_stream.hpp"
#include "stations.hpp"
#include "tasks.hpp"

Audio audio;
String station_text;
uint8_t volume = 10;
volatile uint16_t station_index = 0;

void init_audio()
{
    audio.setPinout(BCLK_PIN, LRC_PIN, DOUT_PIN);
    audio.setVolume(volume);
    change_station(0);
}

void IRAM_ATTR audio_rutine()
{
    audio.loop();
}

void audio_stop()
{
    audio.stopSong();
}

void audio_info(const char *info)
{
    Serial.print("info ");
    Serial.println(info);
}

void change_station(int8_t direction)
{
    station_index += direction;
    if (station_index < 0)
    {
        station_index = TOTAL_STATIONS - 1;
    }
    if (station_index >= TOTAL_STATIONS)
    {
        station_index = 0;
    }
    audio.stopSong();
    audio.connecttohost(stations[station_index].url);
    station_text = String(LISTENING + ": " + (station_index + 1) + " - " + stations[station_index].name);
    xTaskCreate(task_stream_title, "TaskEpaperStation", 5000, &station_text, 1, NULL);
}

void increase_volume(int8_t amount)
{
    volume += amount;
    if (volume > 21)
        volume = 21;
    if (volume < 0)
        volume = 0;
    audio.setVolume(volume);
    xTaskCreate(task_epaper_volume, "TaskEpaperVolume", 5000, &volume, 1, NULL);
}