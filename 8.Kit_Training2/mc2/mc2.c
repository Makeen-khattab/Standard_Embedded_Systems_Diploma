#include "gpio.h"
#include "uart.h"

int main(void)
{
	UART_init(9600);
	uint8 value;
	GPIO_setupPinDirection(PORTA_ID,PIN0_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(PORTA_ID,PIN1_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(PORTA_ID,PIN2_ID, PIN_OUTPUT);
	while(1)
	{
		value=UART_recieveByte();

		if(value == 1)
		{
GPIO_writePin(PORTA_ID, PIN0_ID, LOGIC_HIGH);
GPIO_writePin(PORTA_ID, PIN1_ID, LOGIC_LOW);
GPIO_writePin(PORTA_ID, PIN2_ID, LOGIC_LOW);

		}
		else if(value == 2)
		{

			GPIO_writePin(PORTA_ID, PIN0_ID, LOGIC_LOW);
			GPIO_writePin(PORTA_ID, PIN1_ID, LOGIC_HIGH);
			GPIO_writePin(PORTA_ID, PIN2_ID, LOGIC_LOW);


		}
		else if(value == 3)
		{
			GPIO_writePin(PORTA_ID, PIN0_ID, LOGIC_LOW);
			GPIO_writePin(PORTA_ID, PIN1_ID, LOGIC_LOW);
			GPIO_writePin(PORTA_ID, PIN2_ID, LOGIC_HIGH);


		}


	}



}
