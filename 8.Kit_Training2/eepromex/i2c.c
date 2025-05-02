#include "i2c.h"
#include "Common_Macros.h"
#include "gpio.h"










static uint8 Pow(uint8 num , uint8 exp);




void TWI_init(const TWI_ConfigType * Config_Ptr)
{

TWI_Prescaler a_prescaler=TWI_F_CPUOVER_1;
TWCR=(1<<TWEN);

TWBR = (((F_CPU/((Config_Ptr->bit_rate))*1000)-16 )/(2*Pow(4,a_prescaler)));

TWSR = (((TWSR)&(0xFC)) | (a_prescaler & 0x03));

TWAR= (((TWAR) & (0x01)) |  ((Config_Ptr->address)<<1));


}
void TWI_start(void)
{
	/* Clearing the Bit that indicates of finishing of the start bit signal*/
	TWCR =  ( 1<<TWSTA ) | (1<<TWEN) | (1<<TWINT) ;
	while(BIT_IS_CLEAR(TWCR,TWINT));

}
void TWI_stop(void)
{
	TWCR =  ( 1<<TWSTO ) | (1<<TWEN) | (1<<TWINT) ;
//	while(BIT_IS_CLEAR(TWCR,TWINT));

}
void TWI_writeByte(uint8 a_byte)
{

TWDR = a_byte;
TWCR = (1<<TWEN) | (1<<TWINT);
while(BIT_IS_CLEAR(TWCR,TWINT));

}
uint8 TWI_readByteWithACK(void)
{
	TWCR = (1<<TWEN) | (1<<TWINT) | (1<<TWEA);
	while(BIT_IS_CLEAR(TWCR,TWINT));

	return TWDR ;



}
uint8 TWI_readByteWithNACK(void)
{

	TWCR = (1<<TWEN) | (1<<TWINT);
	while(BIT_IS_CLEAR(TWCR,TWINT));

		return TWDR ;

}
uint8 TWI_getStatus(void)
{

	return ((TWSR) & 0xF8);

}

static uint8 Pow(uint8 a_num , uint8 a_exp)
{
	uint8 i,a_result=1;
	for(i=0;i<a_exp;++i)
	{
		a_result*=a_num;

	}
	return a_result;

}

