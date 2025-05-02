#include "eeprom.h"
#include "i2c.h"
#include "gpio.h"
#include "Common_Macros.h"


uint8 EEPROM_writeByte(uint16 a_address,uint8 a_data)
{
	TWI_start();

	if(TWI_getStatus() != TWI_START)
	{
     return ERROR;
	}

	TWI_writeByte((uint8)(EEPROMADD |((a_address & 0x0700)>>7)));


	if(TWI_getStatus() != TWI_MT_SLA_W_ACK)
	{
		return ERROR;
	}

	TWI_writeByte((uint8)a_address);



	if(TWI_getStatus() != TWI_MT_DATA_ACK)
	{
		return ERROR;
	}


	TWI_writeByte(a_data);



	if(TWI_getStatus()!= TWI_MT_DATA_ACK)
		{
			return ERROR;
		}

	TWI_stop();

	return SUCCESS;



}
uint8 EEPROM_readByte(uint16 a_address,uint8*a_data)
{

		TWI_start();


		if(TWI_getStatus() != TWI_START)
		{

	     return ERROR;
		}

		TWI_writeByte((uint8)(EEPROMADD |((a_address & 0x0700)>>7)));


		if(TWI_getStatus() != TWI_MT_SLA_W_ACK)
		{
			return ERROR;
		}

		TWI_writeByte((uint8)a_address);



		if(TWI_getStatus() != TWI_MT_DATA_ACK)
		{
			return ERROR;
		}

		TWI_start();


		if(TWI_getStatus() != TWI_REP_START)
		{
			return ERROR;

		}

		TWI_writeByte((uint8)(EEPROMADD |((a_address & 0x0700)>>7)|1));



				if(TWI_getStatus() != TWI_MT_SLA_R_ACK)
				{
					return ERROR;
				}


				*(a_data)=TWI_readByteWithNACK();


				 if (TWI_getStatus() != TWI_MR_DATA_NACK)
				 {
				        return ERROR;
				 }



TWI_stop();

return SUCCESS;



}



