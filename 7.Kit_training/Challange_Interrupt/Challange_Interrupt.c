#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
void Int2_Init(void);
char num=0;
int main(void)
{
	/* Application initialization*/
		DDRC|=0x0F;
		PORTC &= 0x0F;
		Int2_Init();

		/* Super_Loop*/
			while(1)
			{



			}




}
void Int2_Init(void)
{
	DDRB&=~(1<<PB2);
	SREG|=1<<7;
	GICR|=1<<INT2;
	MCUCSR|=1<<ISC2;
}
ISR(INT2_vect)
{
	PORTC=(0xF0 & PORTC) | (0X0F & (num));
	if(num==9)
			{
				num=0;

			}
			else
			num++;

}
