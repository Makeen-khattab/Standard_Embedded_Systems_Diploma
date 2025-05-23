#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
void Int1_Init(void);
int i;
#define NO_OF_FLASHES 5
int main(void)
{
	/* Application initialization*/
	DDRC|=0x07;
	PORTC&=(~(1<<0))&(~(1<<1))&(~(1<<2));
	Int1_Init();

	/* Super_Loop*/
		while(1)
		{

PORTC=(PORTC&0xF8)|(1<<PC0);
_delay_ms(500);
PORTC=(PORTC&0xF8)|(1<<PC1);
_delay_ms(500);
PORTC=(PORTC&0xF8)|(1<<PC2);
_delay_ms(500);

		}
}
void Int1_Init(void)
{
	DDRD&=~(1<<3);
	SREG|=1<<7;
	GICR|=1<<INT1;
	MCUCR|=1<<ISC11;
	MCUCR&=~(1<<ISC10);
}
ISR(INT1_vect)
{
	PORTC&=(~(1<<0))&(~(1<<1))&(~(1<<2));
	for(i=0;i<NO_OF_FLASHES*2;++i)
	{
		PORTC^=((1<<0))|((1<<1))|((1<<2));
		_delay_ms(1000);
	}
}
