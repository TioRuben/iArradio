#include "icy_stream.hpp"
#include "stations.hpp"
#include "tasks.hpp"

Audio audio;
String station_text;
uint8_t volume = 10;
uint16_t station_index = 0;

void init_audio()
{
    audio.setPinout(BCLK_PIN, LRC_PIN, DOUT_PIN);
    audio.setVolume(volume);
    change_station(0);
}

void audio_rutine()
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
    if (station_index == 0 && direction == -1)
    {
        station_index = TOTAL_STATIONS - 1;
    }
    else
    {
        station_index += direction;
    }

    if (station_index >= TOTAL_STATIONS)
    {
        station_index = 0;
    }
    audio.stopSong();
    audio.connecttohost(stations[station_index].url);
    station_text = String(LISTENING + ": " + stations[station_index].name);
    xTaskCreate(task_stream_title, "TaskEpaperStation", 5000, &station_text, 1, NULL);
    xTaskCreate(task_epaper_station_number, "TaskEpaperStationNumber", 5000, &station_index, 1, NULL);
    xTaskCreate(task_eeprom_station, "TaskEEPROMStation", 5000, &station_index, 1, NULL);
}

void set_station(int8_t index)
{
    if (index < 0 || index >= TOTAL_STATIONS)
    {
        station_index = 0;
    }
    station_index = index;
}

void audio_showstreamtitle(const char *info)
{
    station_text = String(info);
    // xTaskCreate(task_stream_title, "TaskEpaperStation", 5000, &station_text, 1, NULL);
    // THIS IS A BIT BUGGY
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
    xTaskCreate(task_eeprom_volume, "TaskEEPROMVolume", 5000, &volume, 1, NULL);
}

void set_volume(int8_t value)
{
    if (value > 21)
        value = 21;
    if (value < 0)
        value = 0;
    volume = value;
    increase_volume(0);
}