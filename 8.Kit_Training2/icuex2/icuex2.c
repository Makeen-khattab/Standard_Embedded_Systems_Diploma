#include"icuex2.h"
#include "lcd.h"
#include "avr/io.h"
int main(void)
{
	SREG |= (1<<7);
	ICU_ConfigType a_ICU_attributes ={ICU_F_CPUOVER_1, RISINGEDGE};
LCD_init();
ICU_init(&a_ICU_attributes);
ICU_setCallBack(ICU_calcDutyCycle);


	while(1)
	{



	}



}

static void ICU_calcDutyCycle(void)
{
	static sint8 a_tick = -1 ;
	static uint16 a_T1,a_T2,a_T3,a_duty;
	a_tick++;

	if(a_tick == 0)
	{
		ICU_clearTimerValue();
		ICU_setEdgeDetectionType(FALLINGEDGE);
	}
	else if(a_tick == 1)
	{
		a_T1=ICU_getInputCaptureValue();

		ICU_setEdgeDetectionType(RISINGEDGE);

	}
	else if(a_tick == 2)
	{
		a_T2=ICU_getInputCaptureValue();
		ICU_setEdgeDetectionType(FALLINGEDGE);
	}
	else if(a_tick == 3)
		{
			a_T3=ICU_getInputCaptureValue();
			ICU_setEdgeDetectionType(RISINGEDGE);


			a_duty= ((a_T3-a_T1));
			LCD_moveCursor(1, 1);
			LCD_displayString("Duty = ");
			LCD_floatToString(a_duty);
			LCD_displayCharachter('%');
			a_tick = -1 ;
		}


}
