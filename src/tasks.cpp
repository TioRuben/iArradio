#include <Arduino.h>
#include "ntp_time.h"
#include "battery_capacity.h"
#include "icy_stream.h"

volatile bool updating = false;

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
    }
    vTaskDelete(NULL);
}

void task_epaper_battery(void *parameter)
{
    volatile uint8_t old_capacity = 0;
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
    }
    vTaskDelete(NULL);
}