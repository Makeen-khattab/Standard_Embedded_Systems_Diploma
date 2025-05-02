#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
void Timer0Pwm_Init(unsigned char);
typedef enum
{
	CLOCK_WISE,
	ANTI_CLOCK_WISE,
	STOP
} Motor_Direction;
void Motor(Motor_Direction);
	/*********F_CPU=1000000UL*************/
int main(void)
{
		/* Application initialization*/
	DDRB|=1<<PB3;
	DDRA&= (~(1<<PA0))&(~(1<<PA1))&(~(1<<PA2));
			DDRC|= (1<<PC0) | (1<<PC1);


				/* Super_Loop*/
					while(1)
					{
						if((1<<PA0 )& (PINA))
						{

							Motor(CLOCK_WISE);
							Timer0Pwm_Init(64);
							_delay_ms(2000);
							Timer0Pwm_Init(128);
							_delay_ms(2000);
							Timer0Pwm_Init(255);
							_delay_ms(2000);

						}
						else if((1<<PA1 )& (PINA))
						{

							Motor(ANTI_CLOCK_WISE);
							Timer0Pwm_Init(64);
														_delay_ms(2000);
														Timer0Pwm_Init(128);
														_delay_ms(2000);
														Timer0Pwm_Init(255);
														_delay_ms(2000);

						}
						else if((1<<PA2 )& (PINA))
						{

							Motor(STOP);

						}


					}


}
void Timer0Pwm_Init(unsigned char Duty_Cycle)
{
	TCCR0= (1<<WGM01)|(1<<WGM00)|(1<<COM01)|(1<<CS01);
TCNT0=0;
OCR0=Duty_Cycle;

}

void Motor(Motor_Direction Direction)
{
	switch(Direction)
	{
	case CLOCK_WISE:
	PORTC= (PORTC&0xFC) | 1<<PC1;
	break;
	case ANTI_CLOCK_WISE:
		PORTC= (PORTC&0xFC) | 1<<PC0;
		break;
	case STOP:
		PORTC= (PORTC&0xFC);
	}


}

