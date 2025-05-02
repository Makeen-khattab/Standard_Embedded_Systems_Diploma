#include"keypad.h"
#include"gpio.h"
#include "uart.h"

int main(void)
{

	KEYPAD_init();
	UART_init(9600);
	uint8 value;
	while(1)
	{

		value =KEYPAD_getPressedKey();
		UART_sendByte(value);

	}



}
