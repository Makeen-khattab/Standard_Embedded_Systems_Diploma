#ifndef EEPROM_H_
#define EEPROM_H_

#include "Std_Types.h"

#define EEPROMADD											(0xA0)
#define ERROR 												 (0)
#define SUCCESS 											 (1)
uint8 EEPROM_writeByte(uint16 a_address,uint8 a_data);
uint8 EEPROM_readByte(uint16 a_address,uint8*a_data);





#endif /* EEPROM_H_ */
