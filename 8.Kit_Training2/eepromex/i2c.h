#ifndef I2C_H_
#define I2C_H_

#include "Std_Types.h"

typedef  uint8  TWI_Address;

#define F_CPU					8000000UL
#define TWI_START         0x08 /* start has been sent */
#define TWI_REP_START     0x10 /* repeated start */
#define TWI_MT_SLA_W_ACK  0x18 /* Master transmit ( slave address + Write request ) to slave + ACK received from slave. */
#define TWI_MT_SLA_R_ACK  0x40 /* Master transmit ( slave address + Read request ) to slave + ACK received from slave. */
#define TWI_MT_DATA_ACK   0x28 /* Master transmit data and ACK has been received from Slave. */
#define TWI_MR_DATA_ACK   0x50 /* Master received data and send ACK to slave. */
#define TWI_MR_DATA_NACK  0x58 /* Master received data but doesn't send ACK to slave. */

typedef enum{


	TWI_F_CPUOVER_1,
	TWI_F_CPUOVER_4,
	TWI_F_CPUOVER_16,
	TWI_F_CPUOVER_64
}TWI_Prescaler;



typedef enum
{
	TWI_NORMALMODE=100,
	TWI_FASTMODE=400,
	TWI_FASTMODEPLUS=1000,
	TWI_HIGHSPEEDMODE=3400
}TWI_BaudRate;




typedef struct
{
	TWI_Address address;
     TWI_BaudRate bit_rate;
}TWI_ConfigType;










void TWI_init(const TWI_ConfigType * Config_Ptr);
void TWI_start(void);
void TWI_stop(void);
void TWI_writeByte(uint8 a_byte);
uint8 TWI_readByteWithACK(void);
uint8 TWI_readByteWithNACK(void);
uint8 TWI_getStatus(void);



#endif /* I2C_H_ */
