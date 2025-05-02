#ifndef SPI_H_
#define SPI_H_

#include "Std_Types.h"

#define SPI_MSB_TRANSM_FIRST								1
#define SPI_LSB_TRANSM_FIRST								0
#define SPI_DUMMYBYTE									   0xFF

#define SPI_PORT_ID										PORTB_ID
#define SPI_SS_PIN_ID									PIN4_ID
#define SPI_MOSI_PIN_ID									PIN5_ID
#define SPI_MISO_PIN_ID									PIN6_ID
#define SPI_SCK_PIN_ID									PIN7_ID

typedef enum{

	SPI_F_CPUOVER_4,
	SPI_F_CPUOVER_16,
	SPI_F_CPUOVER_64,
	SPI_F_CPUOVER_128,
	SPI_F_CPUOVER_2,
	SPI_F_CPUOVER_8,
	SPI_F_CPUOVER_32,
	/* Redundant from the MC*/
	SPI_F_CPUOVER64
}SPI_Prescaler;


typedef enum
{
SPI_MODE0,
SPI_MODE1,
SPI_MODE2,
SPI_MODE3
}SPI_Mode;






typedef struct
{
	SPI_Mode mode;
	SPI_Prescaler prescaler;

}SPI_ConfigType;


void SPI_initMaster(SPI_ConfigType*Config_Ptr);
void SPI_initSlave(SPI_ConfigType*Config_Ptr);
uint8 SPI_sendRecieveByte(uint8 a_byte);
void SPI_sendString(uint8 const * a_str);
void SPI_receiveString(uint8 *const a_str);

#endif /* SPI_H_ */
