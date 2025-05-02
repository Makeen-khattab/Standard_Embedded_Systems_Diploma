#ifndef ADC_H_
#define ADC_H_
#include"Std_Types.h"

typedef enum
{
	ADC0,
	ADC1,
	ADC2,
	ADC3,
	ADC4,
	ADC5,
	ADC6,
	ADC7,
}ADC_CHANNEL;


void ADC_int(void);
uint16 ADC_readChannel(uint8);




#endif /* ADC_H_ */
