#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	/* Application initialization*/
	DDRD&=~(1<<3);
	DDRC|=1<<5;


	/* Super_Loop*/
			while(1)
			{

if(!(PIND&(1<<3)))
{
	_delay_ms(30);
	if(!(PIND&(1<<3)))
	{
		PORTC|=(1<<5);
	}
}
else
	PORTC&=~(1<<5);

			}

}

