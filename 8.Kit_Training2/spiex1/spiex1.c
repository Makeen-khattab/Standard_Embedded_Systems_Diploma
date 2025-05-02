#include "spi.h"
#include "gpio.h"
#include "util/delay.h"

int main(void)
{
	/* Example 1*/
	/*
	GPIO_setupPinDirection(PORTA_ID, PIN0_ID, PIN_INPUT);
	*/
	SPI_ConfigType SPI_attributes ={SPI_MODE0,SPI_F_CPUOVER_32};

	SPI_initMaster(&SPI_attributes);

	while(1)
	{
		/* Example 1*/
		/*if(GPIO_readPin(PORTA_ID, PIN0_ID) == LOGIC_HIGH)
			SPI_sendRecieveByte(LOGIC_HIGH);
		else
			SPI_sendRecieveByte(LOGIC_LOW);*/

		_delay_ms(100);
		SPI_sendString("Iam Micro1#");

	}


}
