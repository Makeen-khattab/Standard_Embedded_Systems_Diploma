#include "uart.h"
#include "avr/io.h"
#include "lcd.h"
//uint8 g_UART_firstStringFinished =0;
//void Display(void)
//{
	//uint8 a_receiveData=0;
	//a_receiveData = UART_recieveByte();
	//if(g_UART_firstStringFinished == 1)
	//{
	//g_UART_firstStringFinished =0;
	//}

//}
int main (void)
{
	 uint8 str[21];
	//SREG|=1<<7;
	//UART_setCallBack(Display);
	UART_ConfigType attributes={UART_EIGHTBITMODE,UART_PARITYDISABLED,UART_TWOSTOP,UART_BAUDRATE9600};
   UART_init(&attributes);
   //LCD_init();
while(1)
{
	UART_sendString(str);
	UART_recieveString(str);

}



}


