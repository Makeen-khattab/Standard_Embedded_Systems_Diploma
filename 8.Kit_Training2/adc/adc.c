#include"adc.h"
#include"avr/io.h"
#include "Common_Macros.h"



void ADC_int(void)
{
	ADMUX= (ADMUX&(0x3F))|(0x40);
	CLEAR_BIT(ADMUX,ADLAR);
	SET_BIT(ADCSRA,ADEN);
	CLEAR_BIT(ADCSRA,ADIE);
	ADCSRA= (ADCSRA & 0xF8) |(0x07);
}


uint16 ADC_readChannel(uint8 ch_num)
{
	ADMUX= ((ADMUX & 0xF8) | ch_num);
	SET_BIT(ADCSRA,ADSC);
	while(!(ADIF));
	SET_BIT(ADCSRA,ADIF);

	return (uint16)(ADC);
}

