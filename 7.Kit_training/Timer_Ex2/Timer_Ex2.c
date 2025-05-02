#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
void Timer0_INIT(void);
char num=0;
int main(void)
{
	/* Application initialization*/
DDRC|=1<<PC0;
PORTC&=~(1<<PC0);
Timer0_INIT();
	/* Super_Loop*/
				while(1)
				{



				}



}

void Timer0_INIT(void)
{
	SREG|=1<<7;
	TCCR0= (1<<FOC0)| (1<<CS02) | (1<<CS00);
	TCNT0=0;
	TIMSK|=1<<TOIE0;
}
ISR(TIMER0_OVF_vect)
{
	num++;
	if(num==2) // Approx 512 sec.
	{
		PORTC^=1<<PC0;
		num=0;
	}

}
