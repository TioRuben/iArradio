/**
 * Dont forget
 * SetPinout(26, 25, 19);
 * */

#include <Arduino.h>
#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>
#include <WiFiManager.h>

#include "./epaper/epaper.h"
#include "Audio.h"

Audio audio;
const char *orig_station;

void setup()
{
  WiFiManager wifiManager;
  init_display();
  Serial.begin(115200);
  wifiManager.autoConnect("iArradio", "iArradio123");
  main_interface("24/12/2022", "23:59", "Domingo", "35");
  audio.setPinout(26, 25, 19);
  audio.setVolume(5);
  audio.connecttohost("http://20873.live.streamtheworld.com/CADENASER.mp3");
  set_epaper_station("Cadena SER");
}

void loop()
{
  audio.loop();
}

void audio_info(const char *info)
{
  Serial.print("info        ");
  Serial.println(info);
}
void audio_id3data(const char *info)
{ //id3 metadata
  Serial.print("id3data     ");
  Serial.println(info);
}
void audio_eof_mp3(const char *info)
{ //end of file
  Serial.print("eof_mp3     ");
  Serial.println(info);
}
void audio_showstation(const char *info)
{
  Serial.print("station     ");
  Serial.println(info);
}
void audio_showstreaminfo(const char *info)
{
  Serial.print("streaminfo  ");
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
void audio_bitrate(const char *info)
{
  Serial.print("bitrate     ");
  Serial.println(info);
}
void audio_commercial(const char *info)
{ //duration in sec
  Serial.print("commercial  ");
  Serial.println(info);
}
void audio_icyurl(const char *info)
{ //homepage
  Serial.print("icyurl      ");
  Serial.println(info);
}
void audio_lasthost(const char *info)
{ //stream URL played
  Serial.print("lasthost    ");
  Serial.println(info);
}
void audio_eof_speech(const char *info)
{
  Serial.print("eof_speech  ");
  Serial.println(info);
}