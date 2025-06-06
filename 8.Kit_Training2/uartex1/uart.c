#include"uart.h"
#include "avr/interrupt.h"
#include "Common_Macros.h"
#include "gpio.h"
#include "lcd.h"

#if (UART_INTERRUPTMODE == 1)
static volatile uint8 g_newRecepient=0;
void (*g_setCallBack_Ptr)(void)=NULL;
#endif
void UART_init(UART_ConfigType*config_ptr)
{
	uint16 a_valueInUBBRH=0;
/* Choosing the the transmitting & Receiving Mode of UART
 *
 * Double speed mode gives a wider range of frequencies
 * that can achieve baud rates
 *
 * */
#if(UART_DOUBLESPEEDMODE)
SET_BIT(UCSRA,U2X);
#elif(UART_NORMALMODE)
CLEAR_BIT(UCSRA,U2X);
#endif

/* using asynchronous mode of USART	*/
SET_BIT(UCSRC,URSEL);

CLEAR_BIT(UCSRC,UMSEL);
UCSRC = ((UCSRC&(0xCF)) | ((config_ptr->parity)<<4));
UCSRC = ((UCSRC&(0xF7)) | ((config_ptr->stop_bit)<<3));
UCSRC = ((UCSRC&(0xF9)) | (((config_ptr->bit_data)&(0x03))<<1));
UCSRB = ((UCSRB&(0xFB)) | ((config_ptr->bit_data)&(0x04)));

/* Enabling the Receive Complete interrupt Enable */
#if (UART_INTERRUPTMODE == 1)
SET_BIT(UCSRB,RXCIE);
#endif
SET_BIT(UCSRB,TXEN);
SET_BIT(UCSRB,RXEN);
CLEAR_BIT(UBRRH,URSEL);

#if(UART_DOUBLESPEEDMODE)
a_valueInUBBRH = (uint16)((F_CPU /(8UL*(config_ptr->baud_rate)))-1);
#elif(UART_NORMALMODE)
a_valueInUBBRH = (uint16)((F_CPU /(16*(config_ptr->baud_rate)))-1);
#endif

UBRRH = ((a_valueInUBBRH & 0x0F00)>>8);
UBRRL = (a_valueInUBBRH & 0x00FF);

}
void UART_sendByte(const uint8 a_data)
{
while(BIT_IS_CLEAR(UCSRA,UDRE));
UDR=a_data;

}
uint8 UART_recieveByte(void)
{

while(BIT_IS_CLEAR(UCSRA,RXC));
#if (UART_INTERRUPTMODE == 1)
g_newRecepient=0;
#endif
return UDR;

}
void UART_sendString(const uint8*str)
{
 uint8 i=0;
 /*  *(str+i) = str[i] */
	while( str[i] != '\0')
	{
		UART_sendByte(str[i]);
		++i;
	}


}
void UART_recieveString(uint8*const a_str)
{

	sint8 i=-1;
		do
		{
			i++;

			a_str[i]=UART_recieveByte();




		}while(a_str[i] != '#');

		a_str[i]='\0';

#if (UART_INTERRUPTMODE == 1)
	static sint8 i=-1;
	//do
	//{
		if(g_newRecepient == 1)
		{
		i++;
	str[i]= UART_recieveByte();
	if((str[i]=='#' || (i>UART_MAXSIZEOFSTRING)))
	{
	str[i]='\0';
	i=-1;
	g_UART_firstStringFinished = 1;


	}
		}

	//}while(str[i]!='#' && (i<UART_MAXSIZEOFSTRING));/* This mean that if it is required to recieve a string of 16 char we must predefine an array of 17 char to preserve a place for the null char*/
#endif

}

/* Anything that is required to be done after receiving
 * will be done in the function helded to this function
 *
 * */
#if (UART_INTERRUPTMODE == 1)
void UART_setCallBack(void (setCallBack_Ptr)(void))
{
	g_setCallBack_Ptr = setCallBack_Ptr;

}

ISR(USART_RXC_vect)
{
	if (g_setCallBack_Ptr != NULL)
	{
		g_newRecepient = 1;

		(*g_setCallBack_Ptr)();


	}


}
#endif
