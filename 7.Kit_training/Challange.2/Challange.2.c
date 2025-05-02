#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	/* Application initialization*/
	DDRA&= ~(1<<3) & ~(1<<4);
	DDRD=0xFF;
	/* Super_Loop*/
		while(1)
		{
if(PINA&(1<<3))
{
	_delay_ms(30);
	if(PINA&(1<<3))
	{
		PORTD=(PORTD&(0x00))|0x55;
		_delay_ms(500);
		PORTD=(PORTD&(0x00));

	}

}
else if(PINA&(1<<4))
{
	_delay_ms(30);
		if(PINA&(1<<4))
		{
			PORTD=(PORTD&(0x00))|~(0x55);
			_delay_ms(500);
			PORTD=(PORTD&(0x00));

		}
}
else
	PORTD=(PORTD&(0x00));
		}

}
