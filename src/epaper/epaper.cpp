#include "epaper.h"
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSansBold18pt7b.h>
#include <Fonts/FreeSansBold24pt7b.h>
#include "resources/weather-icons.h"
#include "resources/fontello10pt7b.h"
#include "resources/images.h"

#define SPEAKER_ICON "0"
#define WIFI_ICON "1"
#define SELECTED_ICON "2"

GxEPD2_BW<GxEPD2_270, GxEPD2_270::HEIGHT> display(GxEPD2_270(EPAPER_CS, EPAPER_DC, EPAPER_RST, EPAPER_BUSY));
//GxEPD2_3C<GxEPD2_270c, GxEPD2_270c::HEIGHT> display(GxEPD2_270c(/*CS=*/5, /*DC=*/17, /*RST=*/16, /*BUSY=*/4));

void subrutine_time(String time)
{
    display.setTextColor(GxEPD_BLACK);
    display.setFont(&FreeSansBold18pt7b);
    display.setCursor(10, 42);
    display.print(time);
}

void set_epaper_time(String time)
{
    display.setPartialWindow(10, 16, 85, 25);
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
    display.setCursor(5, 70);
    display.print(date);
    display.setCursor(5, 90);
    display.print(dayOfWeek);
}

void set_epaper_date(String date, String dayOfWeek)
{
    display.setPartialWindow(0, 59, 100, 36);
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

void subrutine_battery(uint8_t percentage)
{
    display.drawRect(112, 98, 40, 15, GxEPD_BLACK);
    display.fillRect(152, 102, 3, 7, GxEPD_BLACK);
    display.fillRect(112, 98, (int16_t)(40 * percentage / 100), 15, GxEPD_BLACK);
}

void set_epaper_battery(uint8_t percentage)
{
    display.setPartialWindow(111, 97, 42, 17);
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
    display.setCursor(162, 112);
    display.print(SELECTED_ICON);
    display.print(SPEAKER_ICON);
    display.setFont(&FreeSans9pt7b);
    display.printf("%d", value);
}

void set_epaper_volume(uint8_t value)
{
    display.setPartialWindow(162, 97, 70, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_volume(value);
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
        display.setCursor(24, 160);
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
        display.drawFastHLine(108, 85, 156, GxEPD_BLACK);
        display.drawFastVLine(108, 0, 124, GxEPD_BLACK);
        subrutine_battery(0);
    } while (display.nextPage());
    display.powerOff();
}
