#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
/*********F_CPU=1000000UL*************/
void Timer0_Init(void);
int main(void)
{
	/* Application initialization*/
DDRB|=1<<PB3;
PORTB|=1<<PB3;
Timer0_Init();
			/* Super_Loop*/
				while(1)
				{




				}

}
void Timer0_Init(void)
{
SREG|=1<<7;
TCCR0= (1<<WGM01) | (1<<CS00) | (1<<FOC0);
TCNT0=0;
OCR0=0xFA;//  Compare Value 0xFA=250
TIMSK|=1<<OCIE0;// Enabling the Peripheral compare mode interrupt

}
ISR(TIMER0_COMP_vect)
{

	PORTB^=1<<PB3;

}
