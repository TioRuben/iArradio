#include <Arduino.h>
#include <EEPROM.h>

#define EEPROM_SIZE 2
#define EEPROM_VOLUME_ADDRESS 0x0
#define EEPROM_STATION_ADDRESS 0x1

void eeprom_init();
uint8_t eeprom_get_volume();
uint8_t eeprom_get_station();
void eeprom_set_volume(uint8_t volume);
void eeprom_set_station(uint8_t station);