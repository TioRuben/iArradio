#include "ntp_time.h"

WiFiUDP wifiUdp;
NTP ntp(wifiUdp);

uint8_t current_dayweek = 8;
uint8_t current_minute = 0;

void init_ntp()
{
    ntp.ruleDST("CEST", Last, Sun, Mar, 2, 120);
    ntp.ruleSTD("CET", Last, Sun, Oct, 3, 60);
    ntp.begin();
}

void update_ntp()
{
    ntp.update();
}

String ntp_get_hour()
{
    return String(ntp.formattedTime("%R"));
}

String ntp_get_date()
{
    return String(ntp.formattedTime("%d/%m/%Y"));
}

String ntp_get_day_of_week()
{
    String days[7] = {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    return days[ntp.weekDay()];
}

uint8_t ntp_get_minutes()
{
    return ntp.minutes();
}

uint8_t ntp_get_day_index()
{
    return ntp.weekDay();
}

void ntp_update_rutine()
{
    if (ntp_get_minutes() != current_minute)
    {
        set_epaper_time(ntp_get_hour());
        if (ntp_get_day_index() != current_dayweek)
        {
            set_epaper_date(ntp_get_date(), ntp_get_day_of_week());
            current_dayweek = ntp_get_day_index();
        }
        current_minute = ntp_get_minutes();
    }
}