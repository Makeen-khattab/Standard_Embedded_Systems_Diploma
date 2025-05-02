#include"sevensegment.h"
#include<avr/interrupt.h>
void Timer0_INIT(void);
char num=0;
char Seven_Seg=0;
int main(void)
{
	/* Application initialization*/
	SEVENSEGMENT_init();
Timer0_INIT();
	/* Super_Loop*/
				while(1)
				{


				}
}
void Timer0_INIT(void)
{
	SREG|=1<<7;
	TCCR0= (1<<FOC0)| (1<<CS02);//256 prescaler
	TCNT0=0;
	TIMSK|=1<<TOIE0;
}
ISR(TIMER0_OVF_vect)
{
	num++;
	if(num==122) // Approx 1 sec.
	{


				if(Seven_Seg==9)
				{
					SEVENSEGMENT_init();

				}
				else
					SEVENSEGMENT_increment();
	}

}

