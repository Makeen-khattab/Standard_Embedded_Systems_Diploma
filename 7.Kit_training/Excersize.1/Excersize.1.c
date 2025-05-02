/*
 * Excersize.1.c
 *
 *  Created on: Jan 1, 2024
 *      Author: Dell
 */
#include"button.h"
#include<avr/io.h>
#include "gpio.h"
int main(void)
{
/* Application initialization*/
BUTTON_init(BUTTON_PORTDID, BUTTON_PIN2ID);
DDRC|=1<<1;
/* Super_Loop*/
while(1)
{
	if((GPIO_readPin(BUTTON_PORTDID, BUTTON_PIN2ID)== BUTTON_PRESSED_PULLUP))
	{
		PORTC|=1<<1;
	}
	else
		PORTC&=~(1<<1);




}








}




