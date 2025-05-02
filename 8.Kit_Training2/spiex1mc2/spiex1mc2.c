#include "spi.h"
#include "gpio.h"
#include "Std_Types.h"
#include "lcd.h"
int main(void)
{
	/* Example 1*/
	/*
	GPIO_setupPinDirection(PORTC_ID, PIN3_ID, PIN_OUTPUT);
	*/

	SPI_ConfigType SPI_attributes ={SPI_MODE0,SPI_F_CPUOVER_32};

	SPI_initSlave(&SPI_attributes);
	LCD_init();

	uint8 str[20];
	/* Example 1*/
	/*
uint8 a_receivedByte;
*/
		SPI_receiveString(str);
		LCD_moveCursor(1, 1);
		LCD_displayString(str);
	while(1)
	{

		/* Example 1*/
		/*
	a_receivedByte=SPI_sendRecieveByte(0xFF);

		if(a_receivedByte == LOGIC_HIGH)
		{

			GPIO_writePin(PORTC_ID, PIN3_ID, LOGIC_HIGH);

		}
		else
			GPIO_writePin(PORTC_ID, PIN3_ID, LOGIC_LOW);
			*/





	}





}
