#include<avr\io.h>
#include"keypad.h"
int main(void)
{

	KEYPAD_init();
	uint8 keyPressed;
	    DDRC|=0x0F;
	    PORTC &= 0xF0;
	    DDRA|=0xFE;
	    PORTA=(PORTA&(0x01)) | 0x7E;
	    DDRC|=1<<6;
	    PORTC|=(1<<6);

while(1)
{
	keyPressed=KEYPAD_getPressedKey();

	switch(keyPressed)
		{
		case 0 :
				PORTA=(PORTA&(0x01)) | 0x7E;
				break;
		case 1 :
			PORTA=(PORTA&(0x01)) | 0x0C;
			break;
		case 2 :
			PORTA=(PORTA&(0x01)) | 0xB6;
			break;
		case 3 :
			PORTA=(PORTA&(0x01)) | 0x9E;
			break;
		case 4 :
				PORTA=(PORTA&(0x01)) | 0xCC;
				break;
		case 5 :
				PORTA=(PORTA&(0x01)) | 0xDA;
				break;
		case 6 :
				PORTA=(PORTA&(0x01)) | 0xFA;
				break;
		case 7 :
				PORTA=(PORTA&(0x01)) | 0x0E;
				break;
		case 8 :
				PORTA=(PORTA&(0x01)) | 0xFE;
				break;
		case 9 :
				PORTA=(PORTA&(0x01)) | 0xCE;
				break;


		}




}

}

