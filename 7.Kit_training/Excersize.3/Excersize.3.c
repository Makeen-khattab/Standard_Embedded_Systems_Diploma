/*
 * Excersize.3.c
 *
 *  Created on: Jan 1, 2024
 *      Author: Dell
 */

#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
/* Application initialization*/
DDRB&=~(1<<0);
DDRB&=~(1<<1);
DDRC|=1<<0;
DDRC|=1<<1;
/* Super_Loop*/
while(1)
{
if((PINB&(1<<0)))
{
  PORTC&=~(1<<0);
}
else
{
	PORTC|=(1<<0);
}
if((PINB&(1<<1)))
{
	PORTC&=~(1<<1);

}
else
{
	PORTC|=(1<<1);

}
}

}
