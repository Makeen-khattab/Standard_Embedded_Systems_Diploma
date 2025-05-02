#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	/* Application initialization*/
	DDRC|=(1<<0);
	DDRC|=(1<<1);
	DDRC|=(1<<2);
	/* initial conditions for LEDs to be off */
	PORTC&=~(1<<0);
	PORTC&=~(1<<1);
	PORTC&=~(1<<2);
	/* Super_Loop*/
	while(1)
	{
		/*Light the first and turn off the rest*/
		PORTC|=(1<<0);
		PORTC&=~(1<<1);
		PORTC&=~(1<<2);
		_delay_ms(500);
		/*Light the Second and turn off the rest*/
		PORTC&=~(1<<0);
		PORTC|=(1<<1);
		PORTC&=~(1<<2);
		_delay_ms(500);
		/*Light the first and turn off the rest*/
		PORTC&=~(1<<0);
		PORTC&=~(1<<1);
		PORTC|=(1<<2);
		_delay_ms(500);

	}
	/* Tarek solution More Better*/
	/*PORTC = (PORTC & 0xF8) | 0x01;   // Turn on the first led only (PC0=1,PC1=0,PC2=0)
			_delay_ms(500);

			PORTC = (PORTC & 0xF8) | 0x02;   // Turn on the second led only (PC0=0,PC1=1,PC2=0)
			_delay_ms(500);

			PORTC = (PORTC & 0xF8) | 0x04;   // Turn on the third led only (PC0=0,PC1=0,PC2=1)
			_delay_ms(500);*/


}
