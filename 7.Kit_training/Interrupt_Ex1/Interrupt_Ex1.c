#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
void Int0_Init(void);

int main(void)
{
	/* Application initialization*/
Int0_Init();
DDRC|=(1<<0);
DDRD&=~(1<<2);
PORTC|=1<<0;
	/* Super_Loop*/
	while(1)
	{





	}




}
void Int0_Init(void)
{
	MCUCR|=1<<ISC01|(1<<ISC00);
	SREG|=1<<7;
	GICR|=1<<6;
}
ISR(INT0_vect)
{
	PORTC^=1<<0;

}
