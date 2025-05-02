#include"keypad.h"
#include "sevensegment.h"
int main(void)
{
KEYPAD_init();
SEVENSEGMENT_init();
uint8 buttonPressed;

while(1)
{
	buttonPressed= KEYPAD_getPressedKey();
	SEVENSEGMENT_setNum(buttonPressed);


}



}


