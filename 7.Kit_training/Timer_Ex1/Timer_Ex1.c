#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
void Timer0_Init(void);
char num=0;
int main(void)
{
	/* Application initialization*/
	DDRC|=1<<PC0;
	PORTC&=~(1<<PC0);
	 Timer0_Init();
		/* Super_Loop*/
			while(1)
			{

while(!((1<<TOV0)&TIFR));
num++;
TIFR|=1<<TOV0;
if(num==1)
{
	TCNT0=24;
}
else{
	TCNT0=0;
PORTC^=1<<PC0;
num=0;
}

			}

}
void Timer0_Init(void)
{
	TCCR0=1<<FOC0|1<<CS02|1<<CS00;
	TCNT0=0;
	TIMSK|=1<<TOIE0;

}
