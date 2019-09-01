#include "icy_stream.h"

Audio audio;
uint8_t volume = 21;

String init_audio()
{
    audio.setPinout(BCLK_PIN, LRC_PIN, DOUT_PIN);
    audio.setVolume(volume);
    audio.connecttohost("http://rne.rtveradio.cires21.com/rne_hc.mp3");
    return String("Escuchando RNE1");
}

void audio_rutine()
{
    audio.loop();
}

void audio_info(const char *info)
{
    Serial.print("info        ");
    Serial.println(info);
}

void audio_showstreamtitle(const char *info)
{
    Serial.print("streamtitle ");
    Serial.println(info);
    if (info)
    {
        set_epaper_station(String(info));
    }
}

void increase_volume(int8_t amount)
{
    volume += amount;
    if (volume > 21)
        volume = 21;
    if (volume < 0)
        volume = 0;
    audio.setVolume(volume);
}