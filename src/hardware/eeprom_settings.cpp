#include "eeprom_settings.hpp"

void eeprom_init()
{
    EEPROM.begin(EEPROM_SIZE);
}

uint8_t eeprom_get_volume()
{
    return EEPROM.read(EEPROM_VOLUME_ADDRESS);
}

uint8_t eeprom_get_station()
{
    return EEPROM.read(EEPROM_STATION_ADDRESS);
}

void eeprom_set_volume(uint8_t vol)
{
    EEPROM.write(EEPROM_VOLUME_ADDRESS, vol);
    EEPROM.commit();
}

void eeprom_set_station(uint8_t sta)
{
    EEPROM.write(EEPROM_STATION_ADDRESS, sta);
    EEPROM.commit();
}