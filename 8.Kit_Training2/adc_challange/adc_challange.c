#include "adc.h"
#include "lm35.h"
#include "lcd.h"
#include "avr/io.h"
volatile uint16 g_ADC_value;
void ADC_setting_Value(void);
int main(void)
{
	SREG|=1<<7;
	LCD_init();
	ADC_ConfigType ADC_objects ={ADC_AREF,ADC_F_CPUOVER_8};
	const ADC_ConfigType * Config_Ptr = &ADC_objects;
	ADC_init(Config_Ptr);
	ADC_setCallBack(ADC_setting_Value);
	uint8 temp;


	while(1)
	{
	temp=LM35_getTemp();
	LCD_displayStringRowColumn(2, 3, "Temp = ");
	LCD_intgerToString(	temp);
	LCD_displayString(" c ");

	}


}

void ADC_setting_Value(void)
{

	g_ADC_value=(uint16)(ADC);

}

