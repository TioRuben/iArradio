#include "epaper.hpp"
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSansBold18pt7b.h>
#include <Fonts/FreeSansBold24pt7b.h>
#include "resources/weather-icons.hpp"
#include "resources/fontello10pt7b.hpp"

#define SPEAKER_ICON "0"
#define SELECTED_ICON "1"
#define CHARGING_ICON "2"
#define STATION_ICON "4"
#define WIFI_ICON_1 "9"
#define WIFI_ICON_2 "8"
#define WIFI_ICON_3 "7"
#define WIFI_ICON_4 "6"
#define WIFI_ICON_5 "5"

GxEPD2_BW<GxEPD2_270, GxEPD2_270::HEIGHT> display(GxEPD2_270(EPAPER_CS, EPAPER_DC, EPAPER_RST, EPAPER_BUSY));
//GxEPD2_3C<GxEPD2_270c, GxEPD2_270c::HEIGHT> display(GxEPD2_270c(/*CS=*/5, /*DC=*/17, /*RST=*/16, /*BUSY=*/4));

void subrutine_time(String time)
{
    display.setTextColor(GxEPD_BLACK);
    display.setFont(&FreeSansBold18pt7b);
    display.setCursor(10, 32);
    display.print(time);
}

void set_epaper_time(String time)
{
    display.setPartialWindow(10, 6, 85, 27);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_time(time);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_date(String date, String dayOfWeek)
{
    display.setTextColor(GxEPD_BLACK);
    display.setFont(&FreeSans9pt7b);
    display.setCursor(5, 55);
    display.print(date);
    display.setCursor(5, 75);
    display.print(dayOfWeek);
}

void set_epaper_date(String date, String dayOfWeek)
{
    display.setPartialWindow(0, 45, 100, 35);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_date(date, dayOfWeek);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_meteo(String temperature)
{
    display.setTextColor(GxEPD_BLACK);
    display.setCursor(109, 42);
    display.setFont(&Meteocons_Regular_35);
    display.write(39);
    display.setFont(&FreeSansBold18pt7b);
    display.print(temperature);
    display.setFont(&Meteocons_Regular_35);
    display.write(42);
    display.write(49);
}

void set_epaper_meteo(String temperature)
{
    display.setPartialWindow(109, 0, display.width() - 109, 45);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_meteo(temperature);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_station(String station)
{
    display.setTextColor(GxEPD_BLACK);
    display.setFont(&FreeSansBold9pt7b);
    display.setCursor(0, 140);
    display.print(station);
}

void set_epaper_station(String station)
{
    display.setPartialWindow(0, 128, display.width(), display.height() - 125);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_station(station);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_wifi_signal(uint8_t rssi)
{
    display.setFont(&fontello10pt7b);
    display.setCursor(87, 111);
    switch (rssi)
    {
    case 1:
        display.print(WIFI_ICON_1);
        break;
    case 2:
        display.print(WIFI_ICON_2);
        break;
    case 3:
        display.print(WIFI_ICON_3);
        break;
    case 4:
        display.print(WIFI_ICON_4);
        break;
    case 5:
        display.print(WIFI_ICON_5);
        break;
    }
}

void set_epaper_wifi_signal(uint8_t rssi)
{
    display.setPartialWindow(87, 97, 40, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_wifi_signal(rssi);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_battery(uint8_t percentage)
{
    display.drawRect(5, 98, 40, 15, GxEPD_BLACK);
    display.fillRect(45, 102, 3, 7, GxEPD_BLACK);
    display.fillRect(5, 98, (int16_t)(40 * percentage / 100), 15, GxEPD_BLACK);
}

void set_epaper_battery(uint8_t percentage)
{
    display.setPartialWindow(0, 97, 42, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_battery(percentage);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_volume(uint8_t value)
{
    display.setFont(&fontello10pt7b);
    display.setCursor(144, 111);
    display.print(SPEAKER_ICON);
    display.setFont(&FreeSans9pt7b);
    display.printf("%d", value);
}

void set_epaper_volume(uint8_t value)
{
    display.setPartialWindow(144, 97, 70, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_volume(value);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_station_number(uint8_t value)
{
    display.setFont(&fontello10pt7b);
    display.setCursor(215, 111);
    display.print(STATION_ICON);
    display.setFont(&FreeSans9pt7b);
    display.printf(" %d", value);
}

void set_epaper_station_number(uint8_t value)
{
    display.setPartialWindow(215, 97, 70, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_station_number(value + 1);
    } while (display.nextPage());
    display.powerOff();
}

void subrutine_cursor_volume(bool volume_mode)
{
    display.setFont(&fontello10pt7b);
    display.setCursor(134, 112);
    display.setTextColor(volume_mode ? GxEPD_BLACK : GxEPD_WHITE);
    display.print(SELECTED_ICON);
    display.setTextColor(GxEPD_BLACK);
}

void subrutine_cursor_station(bool volume_mode)
{
    display.setFont(&fontello10pt7b);
    display.setCursor(204, 112);
    display.setTextColor(volume_mode ? GxEPD_WHITE : GxEPD_BLACK);
    display.print(SELECTED_ICON);
    display.setTextColor(GxEPD_BLACK);
}

void set_epaper_cursor(bool volume_mode)
{
    display.setPartialWindow(134, 97, 12, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_cursor_volume(volume_mode);
    } while (display.nextPage());

    display.setPartialWindow(204, 97, 12, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_cursor_station(volume_mode);
    } while (display.nextPage());
    display.powerOff();
}

void init_display()
{
    SPI.end();
    SPI.begin(18, 12, 23, 15);
    display.init(115200);
    display.setRotation(1);
    display.fillScreen(GxEPD_WHITE);
    display.refresh();
}

void logo_screen(String message)
{
    display.setFont(&FreeSansBold24pt7b);
    int16_t tbx, tby;
    uint16_t tbw, tbh;
    display.getTextBounds("iArradio", 0, 0, &tbx, &tby, &tbw, &tbh);
    uint16_t x = ((display.width() - tbw) / 2) - tbx;
    uint16_t y = ((display.height() - tbh) / 2) - tby;
    display.setFullWindow();
    display.firstPage();
    do
    {
        display.fillScreen(GxEPD_WHITE);
        display.setTextColor(GxEPD_BLACK);
        display.setCursor(x, y);
        display.print("iArradio");
        display.setCursor(0, 150);
        display.setFont(&FreeSans9pt7b);
        display.print(message);
    } while (display.nextPage());
    display.powerOff();
}

void main_interface()
{
    do
    {
        display.fillScreen(GxEPD_WHITE);
        display.setTextColor(GxEPD_BLACK);
        display.drawFastHLine(0, 124, 264, GxEPD_BLACK);
        display.drawFastHLine(0, 85, 264, GxEPD_BLACK);
        display.drawFastVLine(108, 0, 85, GxEPD_BLACK);
        subrutine_battery(0);
    } while (display.nextPage());
    display.powerOff();
}
