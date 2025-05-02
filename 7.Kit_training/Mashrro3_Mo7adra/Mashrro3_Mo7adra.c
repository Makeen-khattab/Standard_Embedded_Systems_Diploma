//#include<avr/io.h>
//#include<util/delay.h>
//#include<avr/interrupt.h>
//unsigned char Tick =0;
//void Timer0_Init(void)
//{
//	SREG|=1<<7;
//	TCCR0=1<<FOC0|1<<WGM01|1<<CS00|1<<CS02;
//	TIMSK|=1<< OCIE0;
//	TCNT0=0;
//	OCR0= 250;
//
//}
//
//int main(void)
//{
///* Application initialization*/
//	Timer0_Init();
//DDRC|=(1<<0);
//PORTC&=~(1<<0);
///* Super_Loop*/
//	while(1);
//}
//ISR(TIMER0_COMP_vect)
//{
//	Tick++;
//	if(Tick==2)
//	{
//
//		PORTC^=(1<<0);
//		Tick=0;
//	}
//
//}
#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
unsigned char Tick =0;
void Timer0_Init(void)
{
	SREG|=1<<7;
	TCCR0=1<<FOC0|1<<WGM01|1<<CS00|1<<CS02;
	TIMSK|=1<< OCIE0;
	TCNT0=0;
	OCR0= 250;

}

int main(void)
{
/* Application initialization*/
	Timer0_Init();
DDRC|=(1<<0);
PORTC&=~(1<<0);
/* Super_Loop*/
	while(1);
}
ISR(TIMER0_COMP_vect)
{
	Tick++;
	if(Tick==32)
	{

		PORTC^=(1<<0);
		Tick=0;
	}

}

