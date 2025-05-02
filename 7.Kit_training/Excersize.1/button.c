#include "gpio.h"
#include "button.h"

void BUTTON_init(uint8 a_portId,uint8 a_pinId)
{
	GPIO_setupPinDirection(a_portId, a_pinId, PIN_INPUT);

}

uint8 BUTTON_state(uint8 a_portId,uint8 a_pinId,uint8 a_mode)
{
	switch(a_mode)
	{
	case BUTTON_PULLUP :

		if(GPIO_readPin(a_portId, a_pinId) == BUTTON_COMPVALUE_PULLUP )
		{
			return BUTTON_PRESSED_PULLUP;
		}
		else
			return (!BUTTON_PRESSED_PULLUP);

		break;


	case BUTTON_PULLDOWN :

		if(GPIO_readPin(a_portId, a_pinId) == BUTTON_COMPVALUE_PULLDOWN )
		{
			return BUTTON_PRESSED_PULLDOWN;
		}
		else
			return (!BUTTON_PRESSED_PULLDOWN);
		break;

default:
;
	}

}


