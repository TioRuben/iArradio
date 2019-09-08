#include "eeprom_settings.hpp"

void eeprom_init()
{
    EEPROM.begin(EEPROM_SIZE);
}

uint8_t eeprom_get_volume()
{
    uint8_t vol_read = EEPROM.read(EEPROM_VOLUME_ADDRESS);
    Serial.printf("VOL READ %d\n", vol_read);
    return vol_read;
}

uint8_t eeprom_get_station()
{
    uint8_t sta_read = EEPROM.read(EEPROM_STATION_ADDRESS);
    Serial.printf("STA READ %d\n", sta_read);
    return sta_read;
}

void eeprom_set_volume(uint8_t vol)
{
    Serial.printf("SAVING VOLUME %d\n", vol);
    EEPROM.write(EEPROM_VOLUME_ADDRESS, vol);
    Serial.printf("RESULT %d\n", EEPROM.commit());
}

void eeprom_set_station(uint8_t sta)
{
    Serial.printf("SAVING STATION %d\n", sta);
    EEPROM.write(EEPROM_STATION_ADDRESS, sta);
    Serial.printf("RESULT %d\n", EEPROM.commit());
}