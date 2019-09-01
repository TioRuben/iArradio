#include "epaper.h"
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSansBold18pt7b.h>
#include <Fonts/FreeSansBold24pt7b.h>
#include "resources/weather-icons.h"

GxEPD2_BW<GxEPD2_270, GxEPD2_270::HEIGHT> display(GxEPD2_270(/*CS=*/5, /*DC=*/17, /*RST=*/16, /*BUSY=*/4));

void subrutine_time(String time)
{
    display.setTextColor(GxEPD_BLACK);
    display.setFont(&FreeSansBold18pt7b);
    display.setCursor(10, 42);
    display.print(time);
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

void subrutine_station(String station)
{
    display.setTextColor(GxEPD_BLACK);
    display.setFont(&FreeSansBold9pt7b);
    display.setCursor(0, 140);
    display.print(station);
}

void subrutine_battery(uint8_t percentage)
{
    display.drawRect(112, 98, 40, 15, GxEPD_BLACK);
    display.fillRect(152, 102, 3, 7, GxEPD_BLACK);
    display.fillRect(112, 98, (int16_t)(40 * percentage / 100), 15, GxEPD_BLACK);
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
}

void main_interface(String date, String time, String dayOfWeek, String temperature, uint8_t battery_percentage)
{
    do
    {
        display.fillScreen(GxEPD_WHITE);
        display.setTextColor(GxEPD_BLACK);
        display.drawFastHLine(0, 124, 264, GxEPD_BLACK);
        display.drawFastHLine(108, 85, 156, GxEPD_BLACK);
        display.drawFastVLine(108, 0, 124, GxEPD_BLACK);
        subrutine_time(time);
        subrutine_date(date, dayOfWeek);
        //subrutine_meteo(temperature);
        subrutine_battery(battery_percentage);
    } while (display.nextPage());
}

void set_epaper_time(String time)
{
    display.setPartialWindow(10, 16, 85, 25);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_time(time);
    } while (display.nextPage());
}

void set_epaper_date(String date, String dayOfWeek)
{
    display.setPartialWindow(0, 59, 100, 36);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_date(date, dayOfWeek);
    } while (display.nextPage());
}

void set_epaper_meteo(String temperature)
{
    display.setPartialWindow(109, 0, display.width() - 109, 45);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_meteo(temperature);
    } while (display.nextPage());
}

void set_epaper_station(String station)
{
    display.setPartialWindow(0, 128, display.width(), display.height() - 125);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_station(station);
    } while (display.nextPage());
}

void set_epaper_battery(uint8_t percentage)
{
    display.setPartialWindow(111, 97, 154, 17);
    do
    {
        display.fillScreen(GxEPD_WHITE);
        subrutine_battery(percentage);
    } while (display.nextPage());
}