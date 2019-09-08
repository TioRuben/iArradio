#include "icy_stream.hpp"
#include "tasks.hpp"

Audio audio;
uint8_t volume = 10;
const char *old_info = "";

String init_audio()
{
    audio.setPinout(BCLK_PIN, LRC_PIN, DOUT_PIN);
    audio.setVolume(volume);
    audio.connecttohost("http://rne.rtveradio.cires21.com/rne_hc.mp3");
    return String("Escuchando RNE1");
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
    Serial.print("info        ");
    Serial.println(info);
}

// void audio_showstreamtitle(const char *info)
// {
//     Serial.print("streamtitle ");
//     Serial.println(info);
//     if (strcmp(info, old_info) != 0)
//     {
//         Serial.println("CHANGING streamtitle");
//         old_info = info;
//         xTaskCreate(task_stream_title, "TaskStreamTitle", 50000, (void *)&info, 1, NULL);
//     }
// }

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