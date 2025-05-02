#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
typedef enum{
	ZER0_DEGREE=1000,
	NINTY_DEGREE=1500,
	HUNDEIGHTY_DEGREE=2000
}Servo_Motor;
#define MAX_NUM_OF_COUNTS 20000
void Timer1_Pwm_Mode(Servo_Motor);
int main(void)
{
	/* Application initialization*/
		unsigned char Flag=1;
		char Num=-1;
		DDRD|=1<<PD5;
		DDRA&=~(1<<PA2);
	/* Super_Loop*/
				while(1)
				{
					if((PINA&(1<<PA2))&& (Flag))
											{
												_delay_ms(30);
												if((PINA&(1<<PA2))&& (Flag))
												{
													Num++;
													switch (Num)
													{
													case 0:
														Timer1_Pwm_Mode(ZER0_DEGREE);
														Flag=0;
														break;
													case 1:
														Timer1_Pwm_Mode(NINTY_DEGREE);
														Flag=0;
														break;
													case 2:
														Timer1_Pwm_Mode(HUNDEIGHTY_DEGREE);
														Flag=0;
														Num=-1;
														break;

													}
												}


											}
											else if(!(PINA&(1<<PA2)))
												Flag=1;






				}



}

void Timer1_Pwm_Mode(Servo_Motor Rotation)
{
	TCCR1A= (1<<WGM11)|(1<<COM1A1);
	TCCR1B= (1<<WGM12)|(1<<WGM13)|(1<<CS11);
	TCNT1=0;
	OCR1A=Rotation;
	ICR1=MAX_NUM_OF_COUNTS;

}


