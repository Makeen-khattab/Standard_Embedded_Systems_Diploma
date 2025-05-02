#include "spi.h"
#include "Common_Macros.h"
#include "gpio.h"




void SPI_initMaster(SPI_ConfigType*Config_Ptr)
{
GPIO_setupPinDirection(SPI_PORT_ID, SPI_MISO_PIN_ID, PIN_INPUT);
GPIO_setupPinDirection(SPI_PORT_ID, SPI_SCK_PIN_ID, PIN_OUTPUT);
GPIO_setupPinDirection(SPI_PORT_ID, SPI_MOSI_PIN_ID, PIN_OUTPUT);
GPIO_setupPinDirection(SPI_PORT_ID, SPI_SS_PIN_ID, PIN_OUTPUT);

/* Choosing the module as a MASTER*/
SET_BIT(SPCR,MSTR);
/*Enabling SPI hardware module*/
SET_BIT(SPCR,SPE);

/*Choosing the way of sending data either MSB first or LSB first*/
#if(SPI_MSB_TRANSM_FIRST == 1)
CLEAR_BIT(SPCR,DORD);
#elif(SPI_LSB_TRANSM_FIRST == 1)
SET_BIT(SPCR,DORD);
#endif

switch (Config_Ptr->mode)
{
case 0 :

CLEAR_BIT(SPCR,CPOL);
CLEAR_BIT(SPCR,CPHA);

break;

case 1 :

CLEAR_BIT(SPCR,CPOL);
SET_BIT(SPCR,CPHA);

break;

case 2 :

SET_BIT(SPCR,CPOL);
CLEAR_BIT(SPCR,CPHA);

break;

case 3 :

SET_BIT(SPCR,CPOL);
SET_BIT(SPCR,CPHA);

break;

default :
CLEAR_BIT(SPCR,CPOL);
CLEAR_BIT(SPCR,CPHA);

}

SPCR = ((SPCR & 0xFC) | ((Config_Ptr->prescaler)&0x03));
SPSR = ((SPSR & 0xFE) |	( ((Config_Ptr->prescaler)&0x04)>>2 ));



}
void SPI_initSlave(SPI_ConfigType*Config_Ptr)
{
	GPIO_setupPinDirection(SPI_PORT_ID, SPI_MISO_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(SPI_PORT_ID, SPI_SCK_PIN_ID, PIN_INPUT);
	GPIO_setupPinDirection(SPI_PORT_ID, SPI_MOSI_PIN_ID, PIN_INPUT);
	GPIO_setupPinDirection(SPI_PORT_ID, SPI_SS_PIN_ID, PIN_INPUT);

/* Choosing the module as a Slave*/
	CLEAR_BIT(SPCR,MSTR);
/*Enabling SPI hardware module*/
	SET_BIT(SPCR,SPE);

/*Choosing the way of sending data either MSB first or LSB first*/
#if(SPI_MSB_TRANSM_FIRST == 1)
CLEAR_BIT(SPCR,DORD);
#elif(SPI_LSB_TRANSM_FIRST == 1)
SET_BIT(SPCR,DORD);
#endif

switch (Config_Ptr->mode)
{
case 0 :

CLEAR_BIT(SPCR,CPOL);
CLEAR_BIT(SPCR,CPHA);

break;

case 1 :

CLEAR_BIT(SPCR,CPOL);
SET_BIT(SPCR,CPHA);

break;

case 2 :

SET_BIT(SPCR,CPOL);
CLEAR_BIT(SPCR,CPHA);

break;

case 3 :

SET_BIT(SPCR,CPOL);
SET_BIT(SPCR,CPHA);

break;

default :
CLEAR_BIT(SPCR,CPOL);
CLEAR_BIT(SPCR,CPHA);

}

SPCR = ((SPCR & 0xFC) | ((Config_Ptr->prescaler)&0x03));
SPSR = ((SPSR & 0xFE) |	( ((Config_Ptr->prescaler)&0x04)>>2 ));




}
uint8 SPI_sendRecieveByte(uint8 a_byte)
{
	SPDR = a_byte;
	while(BIT_IS_CLEAR(SPSR,SPIF));

	return SPDR ;


}
void SPI_sendString(uint8 const * a_str)
{
	uint8 i=0;

	while (a_str[i] !='\0')
	{
		SPI_sendRecieveByte(a_str[i]);
		i++;
	}


}
void SPI_receiveString(uint8 *const a_str)
{
	sint8 i=-1;
	do
	{
		i++;

		a_str[i]=SPI_sendRecieveByte(SPI_DUMMYBYTE);




	}while(a_str[i] != '#');

	a_str[i]='\0';



}
