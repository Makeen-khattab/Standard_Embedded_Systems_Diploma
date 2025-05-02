#include"keypad.h"
#include"sevensegment.h"
int main(void)
{
	KEYPAD_init();
	SEVENSEGMENT_init();
	uint8 value;
	while(1)
	{
		value=KEYPAD_getPressedKey();
		SEVENSEGMENT_setNum(value);


	}


}
