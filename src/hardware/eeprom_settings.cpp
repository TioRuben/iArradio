#include "eeprom_settings.hpp"

EEPROMClass  iArradio_EEPROM("iArradio", EEPROM_SIZE);

void eeprom_init()
{
    iArradio_EEPROM.begin(EEPROM_SIZE);
}

uint8_t eeprom_get_volume()
{
    return iArradio_EEPROM.read(EEPROM_VOLUME_ADDRESS);
}

uint8_t eeprom_get_station()
{
    return iArradio_EEPROM.read(EEPROM_STATION_ADDRESS);
}

void eeprom_set_volume(uint8_t vol)
{
    iArradio_EEPROM.write(EEPROM_VOLUME_ADDRESS, vol);
    iArradio_EEPROM.commit();
}

void eeprom_set_station(uint8_t sta)
{
    iArradio_EEPROM.write(EEPROM_STATION_ADDRESS, sta);
    iArradio_EEPROM.commit();
}