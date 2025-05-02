/*
 * Excersize.2.c
 *
 *  Created on: Jan 1, 2024
 *      Author: Dell
 */

#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
/* Application initialization*/

DDRC|=1<<2;
PORTC|=1<<2;
/* Super_Loop*/
while(1)
{
	PORTC^=1<<2;
_delay_ms(1000);


}
}
