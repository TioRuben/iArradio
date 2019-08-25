#include <SPI.h>
#define ENABLE_GxEPD2_GFX 0
#include <GxEPD2_BW.h>
#include <GxEPD2_3C.h>
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSansBold18pt7b.h>
#include <Fonts/FreeSansBold24pt7b.h>
#include "./resources/weather-icons.h"

GxEPD2_3C<GxEPD2_270c, GxEPD2_270c::HEIGHT> display(GxEPD2_270c(/*CS=*/5, /*DC=*/17, /*RST=*/16, /*BUSY=*/4));

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
    display.setTextColor(GxEPD_COLORED);
    display.setCursor(109, 42);
    display.setFont(&Meteocons_Regular_35);
    display.write(39);
    display.setFont(&FreeSansBold18pt7b);
    display.print(temperature);
    display.setFont(&Meteocons_Regular_35);
    display.write(42);
    display.write(49);
}

void init_display()
{
    SPI.end();
    SPI.begin(18, 12, 23, 15);
    display.init(115200);
    display.setRotation(1);
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
        display.fillScreen(GxEPD_COLORED);
        display.setTextColor(GxEPD_WHITE);
        display.setCursor(x, y);
        display.print("iArradio");
        display.setCursor(24, 160);
        display.setFont(&FreeSans9pt7b);
        display.print("Iniciando...");
    } while (display.nextPage());
}

void main_interface(String date, String time, String dayOfWeek, String temperature)
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
        subrutine_meteo(temperature);
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