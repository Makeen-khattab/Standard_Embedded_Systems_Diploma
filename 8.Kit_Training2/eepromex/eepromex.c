#include "eeprom.h"
#include "i2c.h"
#include "gpio.h"
#include "util/delay.h"

int main (void)
{
	TWI_ConfigType attributes={0xF0,TWI_FASTMODE};
	GPIO_setupPortDirection(PORTD_ID,PORT_OUTPUT);

	TWI_init(&attributes);

uint8  data ;
	EEPROM_writeByte(0x0311, 0xAA);
	_delay_ms(10);
	EEPROM_readByte(0x0311, &data);



while(1)
	{

	GPIO_writePort(PORTD_ID, data);





	}




}
