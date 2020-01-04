#include "tasks.hpp"

volatile bool updating = false;
uint8_t old_capacity = 0;
uint8_t old_rssi = 0;
String old_stream_name = "";

void set_updating(bool value)
{
    updating = value;
}

void task_ntp(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            ntp_update_rutine();
            updating = false;
            vTaskDelay(portTICK_PERIOD_MS * 1000);
        }
        vTaskDelay(portTICK_PERIOD_MS * 15);
    }
    vTaskDelete(NULL);
}

void task_weather(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            weather_update_rutine();
            updating = false;
            vTaskDelay(portTICK_PERIOD_MS * 500000);
        }
        vTaskDelay(portTICK_PERIOD_MS * 32);
    }
    vTaskDelete(NULL);
}

void task_epaper_battery(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            uint8_t capacity = get_battery_capacity();
            if (capacity != old_capacity)
            {
                old_capacity = capacity;
                set_epaper_battery(capacity);
            }
            updating = false;
            vTaskDelay(portTICK_PERIOD_MS * 30500);
        }
        vTaskDelay(portTICK_PERIOD_MS * 24);
    }
    vTaskDelete(NULL);
}

void task_epaper_rssi(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            uint8_t rssi = get_wifi_rssi();
            if (rssi != old_rssi)
            {
                old_rssi = rssi;
                set_epaper_wifi_signal(rssi);
            }
            updating = false;
            vTaskDelay(portTICK_PERIOD_MS * 1250);
        }
        vTaskDelay(portTICK_PERIOD_MS * 150);
    }
    vTaskDelete(NULL);
}

void task_stream_title(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            set_epaper_station(*((String *)parameter));
            updating = false;
            break;
        }
        vTaskDelay(portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

void task_epaper_station_number(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            set_epaper_station_number(*((uint16_t *)parameter));
            updating = false;
            break;
        }
        vTaskDelay(portTICK_PERIOD_MS * 5);
    }
    vTaskDelete(NULL);
}

void task_eeprom_station(void *parameter)
{
    eeprom_set_station(*((uint8_t *)parameter));
    vTaskDelete(NULL);
}

void task_epaper_volume(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            set_epaper_volume(*((uint8_t *)parameter));
            updating = false;
            break;
        }
        vTaskDelay(portTICK_PERIOD_MS * 3);
    }
    vTaskDelete(NULL);
}

void task_eeprom_volume(void *parameter)
{
    eeprom_set_volume(*((uint8_t *)parameter));
    vTaskDelete(NULL);
}

void task_epaper_cursor(void *parameter)
{
    for (;;)
    {
        if (!updating)
        {
            updating = true;
            set_epaper_cursor(*((bool *)parameter));
            updating = false;
            break;
        }
        vTaskDelay(portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}