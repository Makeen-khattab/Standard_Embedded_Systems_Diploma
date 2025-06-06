#ifndef ADC_H_
#define ADC_H_

#include "Std_Types.h"

#define ADC0				0b00000
#define ADC1				0b00001
#define ADC2				0b00010
#define ADC3				0b00011
#define ADC4				0b00100
#define ADC5				0b00101
#define ADC6				0b00110
#define ADC7				0b00111


typedef enum{
ADC_AREF,
ADC_AVCC,
ADC_RESERVED,
ADC_INTERNAL_2560mv

}ADC_ReferenceVolatge;

typedef enum{

	ADC_F_CPUOVER2,
	ADC_F_CPUOVER_2,
	ADC_F_CPUOVER_4,
	ADC_F_CPUOVER_8,
	ADC_F_CPUOVER_16,
	ADC_F_CPUOVER_32,
	ADC_F_CPUOVER_64,
	ADC_F_CPUOVER_128,
}ADC_Prescaler;

typedef struct{
 ADC_ReferenceVolatge ref_volt;
 ADC_Prescaler prescaler;
}ADC_ConfigType;

void ADC_init(const ADC_ConfigType * Config_Ptr);
uint16 ADC_readChannel(uint8 a_ch_num);

#endif /* ADC_H_ */
