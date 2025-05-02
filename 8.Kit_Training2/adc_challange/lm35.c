#include "adc.h"
#include "lm35.h"

uint8 LM35_getTemp(void)
{
	uint8 LM35_temp=0;
uint16 ADC_readBits=0;
#if (ADC_POLLINGMODE==1)
ADC_readBits=ADC_readChannel(ADC2);
#elif(ADC_INTERRUPTMODE==1)
ADC_readChannel(ADC2);
ADC_readBits=g_ADC_value;
#endif
/* When you explicit type casting you must make it to a variable not for the expression
 * as when we multiply the value of multiplication is initially stored in ADC_readBits which has a max value
 * of 2^16 so the ADC_readBits will overflow so we explicit cast to widen the range of the variable in the expression
 * to withstand the value resulted by multiplication
 * */
LM35_temp= ((uint32)(ADC_readBits) * MAXTEMP* VREF) /(LM35MAXVOLTAGE * ADC_MAXCOUNT);

return (uint8)LM35_temp;
}


