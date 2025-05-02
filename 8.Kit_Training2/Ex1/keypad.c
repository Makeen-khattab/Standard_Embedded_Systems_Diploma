#include"gpio.h"
#include"Keypad.h"
#include<util/delay.h>


void KEYPAD_init(void)
{
GPIO_setupPinDirection(PORT_COLUMNID,PIN1_COLUMNID, PIN_INPUT);
GPIO_setupPinDirection(PORT_COLUMNID,PIN2_COLUMNID, PIN_INPUT);
GPIO_setupPinDirection(PORT_COLUMNID,PIN3_COLUMNID, PIN_INPUT);
#if ( KEYPAD_4x4 == 1)
{
	GPIO_setupPinDirection(PORT_COLUMNID,PIN4_COLUMNID, PIN_INPUT);
}
#elif( KEYPAD_4x3 == 1)
/* Do nothing*/
#endif
}
uint8 KEYPAD_getPressedKey(void)
{
		uint8 a_row,a_col,a_colSel;
		 	GPIO_setupPinDirection(PORT_ROWID ,PIN1_ROWID, PIN_INPUT);
			GPIO_setupPinDirection(PORT_ROWID ,PIN2_ROWID, PIN_INPUT);
			GPIO_setupPinDirection(PORT_ROWID ,PIN3_ROWID, PIN_INPUT);
			GPIO_setupPinDirection(PORT_ROWID ,PIN4_ROWID, PIN_INPUT);
while(1){
	for(a_row=0;a_row<ROWNUM; a_row++)
	{
		switch (a_row)
		{
		case 0 :
			GPIO_setupPinDirection(PORT_ROWID,PIN1_ROWID, PIN_OUTPUT);
			GPIO_writePin(PORT_ROWID,PIN1_ROWID,WRITEVALUE);
			break;
		case 1 :
		    GPIO_setupPinDirection(PORT_ROWID,PIN2_ROWID, PIN_OUTPUT);
			GPIO_writePin(PORT_ROWID,PIN2_ROWID,WRITEVALUE);
			break;
		case 2:
			GPIO_setupPinDirection(PORT_ROWID,PIN3_ROWID, PIN_OUTPUT);
			GPIO_writePin(PORT_ROWID,PIN3_ROWID,WRITEVALUE);
			break;
		case 3:
			GPIO_setupPinDirection(PORT_ROWID,PIN4_ROWID, PIN_OUTPUT);
			GPIO_writePin(PORT_ROWID,PIN4_ROWID,WRITEVALUE);
			break;
		default:
			;
		}

		for(a_col=0;a_col<COLNUM; a_col++)
		{
			switch (a_col)
			{
			case 0 :
				a_colSel=PIN1_COLUMNID;
				break;
			case 1 :
				a_colSel=PIN2_COLUMNID;
				break;
			case 2 :
				a_colSel=PIN3_COLUMNID;
				break;
			#if(KEYPAD_4x4)
			case 3 :
				a_colSel=PIN4_COLUMNID;
				break;

			#endif

			}
			if(GPIO_readPin(PORT_COLUMNID,a_colSel) == COMPVALUE)
			{

				return  KEYPAD_adjustKeyNumber(((a_row*COLNUM)+a_col+1));
			}


		}
		switch (a_row)
				{
		case 0 :
			GPIO_setupPinDirection(PORT_ROWID,PIN1_ROWID, PIN_INPUT);
			break;
		case 1 :
			GPIO_setupPinDirection(PORT_ROWID,PIN2_ROWID, PIN_INPUT);
			break;
		case 2:
			GPIO_setupPinDirection(PORT_ROWID,PIN3_ROWID, PIN_INPUT);
			break;
		case 3:
			GPIO_setupPinDirection(PORT_ROWID,PIN4_ROWID, PIN_INPUT);
			break;
		default:
				;
				}


	_delay_ms(5);
	}
}

}

uint8 KEYPAD_adjustKeyNumber(uint8 a_buttonPosition)
{
	uint8 a_keyPad=0;
#if(KEYPAD_4x4==1)
switch(a_buttonPosition)
{
case 1 :
	a_keyPad=7;
	break;
case 2 :
	a_keyPad=8;
		break;
case 3 :
	a_keyPad=9;
		break;
case 4 :
	a_keyPad='%';
		break;
case 5 :
	a_keyPad=4;
		break;
case 6 :
	a_keyPad=5;
		break;
case 7 :
	a_keyPad=6;
		break;
case 8 :
	a_keyPad='x';
		break;
case 9 :
	a_keyPad=1;
		break;
case 10 :
	a_keyPad=2;
		break;
case 11 :
	a_keyPad=3;
		break;
case 12 :
	a_keyPad='-';
		break;
case 13 :
	a_keyPad='o';
		break;
case 14 :
	a_keyPad=0;
		break;
case 15 :
	a_keyPad='=';
		break;
case 16 :
	a_keyPad='+';
		break;
default:
;


}

#elif(KEYPAD_4x3==1)
switch(a_buttonPosition)
{
case 1 :
	a_keyPad=1;
	break;
case 2 :
	a_keyPad=2;
			break;
case 3 :
	a_keyPad=3;
			break;
case 4 :
	a_keyPad=4;
			break;
case 5 :
	a_keyPad=5;
			break;
case 6 :
	a_keyPad=6;
			break;
case 7 :
	a_keyPad=7;
			break;
case 8 :
	a_keyPad=8;
			break;
case 9 :
	a_keyPad=9;
			break;
case 10 :
	a_keyPad='*';
			break;
case 11 :
	a_keyPad=0;
			break;
case 12 :
	a_keyPad='#';
			break;

default:
	;
}

#endif

return a_keyPad;
}




