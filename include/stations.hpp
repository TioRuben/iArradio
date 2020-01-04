#include <Arduino.h>
#define TOTAL_STATIONS 12

struct Station
{
    String url;
    String name;
};

Station stations[TOTAL_STATIONS] PROGMEM = {
    {"http://rne.rtveradio.cires21.com/rne/mp3/icecast.audio",
     "RNE 1"},
    {"http://playerservices.streamtheworld.com/api/livestream-redirect/CADENASER.mp3",
     "Cadena SER"},
    {"http://rne.rtveradio.cires21.com/radio3/mp3/icecast.audio",
     "RNE 3"},
    {"http://icecast-streaming.nice264.com/ondacero",
     "Onda Cero"},
    {"http://radio5.rtveradio.cires21.com/radio5/mp3/icecast.audio",
     "RNE 5"},
    {"http://flucast-m04-04.flumotion.com/cope/net2.mp3",
     "COPE"},
    {"http://playerservices.streamtheworld.com/api/livestream-redirect/Los40.mp3",
     "Los 40"},
    {"http://icecast-streaming.nice264.com/europafm",
     "Europa FM"},
    {"http://flucast-m04-05.flumotion.com/cope/cadena100.mp3",
     "Cadena 100"},
    {"http://playerservices.streamtheworld.com/api/livestream-redirect/CADENADIAL.mp3",
     "Cadena Dial"},
    {"http://playerservices.streamtheworld.com/api/livestream-redirect/M80RADIO.mp3",
     "Los 40 Classic"},
    {"http://icecast-streaming.nice264.com/melodiafm",
     "Melodía FM"}};