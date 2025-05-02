#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
void Timer0_Init(void);
unsigned char Tick =0;
int main(void)
{
	/* Application initialization*/
		DDRC|=1<<PC0;
		PORTC&=~(1<<PC0);//Led is to be off
		Timer0_Init();
			/* Super_Loop*/
				while(1)
				{


				}





}
void Timer0_Init(void)
{
	SREG|=1<<7;
	TCCR0=(1<<WGM01)|(1<<CS02)|(1<<CS00)|(1<<FOC0);
	TIMSK |= (1<<OCIE0);
	TCNT0=0;
	OCR0=250;


}


ISR(TIMER0_COMP_vect)
{
	if(Tick==32)
	{
		Tick=0;
		PORTC^=(1<<PC0);
	}
	else
		Tick++;

}
