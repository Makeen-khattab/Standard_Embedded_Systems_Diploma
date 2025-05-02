#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
#define F_CPU		8000000UL
unsigned char Tick=0;
void Timer0_PWM_Init(void);
int main(void)
{
	/* Application initialization*/
	DDRC|=0x07;
	PORTC|=0x07;//Initialize the first three pins
	Timer0_PWM_Init();
			/* Super_Loop*/
				while(1)
				{



				}



}

void Timer0_PWM_Init(void)
{
	/******************************************************************
	 * ***************************************************************
	 * Prescaler is =8 and freq=8Megahz therefore each count is 1 microsec
	 * *****************************************************************/
	SREG|=1<<7;
	TCCR0= (1<<FOC0) | (1<<WGM01) | (1<<CS01);
	TCNT0=0;
	OCR0=50;
	TIMSK|=1<<OCIE0;
}
ISR(TIMER0_COMP_vect)
{   Tick++;
	PORTC^=1<<PC0;
	if(!(Tick%2))
	{
	PORTC^=1<<PC1;
	}
	if(!(Tick%4))
	{
		PORTC^=1<<PC2;
		Tick=0; /* We force it to be zero as the unsigned char overflows after 255*/
	}

}
