#include"lcd.h"
#include "adc.h"

int main(void)
{

	uint16 res_value;
	LCD_init(); /* initialize LCD driver */

	ADC_ConfigType ADC_object ={ADC_AVCC,ADC_F_CPUOVER_128};
	const ADC_ConfigType * Config_Ptr = &ADC_object;
	 ADC_init( Config_Ptr); /* initialize ADC driver */

	/* Display this string "ADC Value = " only once on LCD at the first row */
	LCD_displayString("ADC Value = ");
    while(1)
    {
    	/* Read ADC channel 0 where the potentiometer is connected */
		res_value = ADC_readChannel(ADC0);

		/* Display the ADC digital value every time at same position */
		LCD_moveCursor(1,12);
		if(res_value >= 1000)
		{
			LCD_intgerToString(res_value);
		}
		else
		{
			LCD_intgerToString(res_value);
			/* In case the digital value is three or two or one digits print space in the next digit place */
			LCD_displayCharachter(' ');
		}
    }

}


