#include<avr/io.h>
#include<util/delay.h>
typedef enum
{
	Increment,
	Decrement



}Count_State;
void Init_Seven_Segement(void);
void Increment_Decrement_Seven_Segement(unsigned char*num,Count_State);
int main(void)
{
	/* Application initialization*/
	/* Super_Loop*/
	DDRD&=(~(1<<2)) & (~(1<<3));
	Init_Seven_Segement();
	unsigned char num=0;
	unsigned char flag=1;

	 while(1)
	 {
		 if(!(PIND & (1<<2) ))
				{ if (flag)
				{

							_delay_ms(30);
							if(!(PIND & (1<<2)) )
							{
								Increment_Decrement_Seven_Segement(&num,Increment);

							}

flag=0;
				}

						}
		 else if(!(PIND &(1<<3) ))
		 				{ if(flag){
		 							_delay_ms(30);
		 							if(!(PIND & (1<<3)) && flag )
		 							{
		 								Increment_Decrement_Seven_Segement(&num,Decrement);


		 							}
		 flag=0;
		 				}
		 						}
		 else
			 flag=1;



					}

}
void Init_Seven_Segement(void)
{
	DDRA|=0xFE;
	PORTA=(PORTA&(0x01)) | 0x7E;
	DDRC|=1<<6;
	PORTC|=(1<<6);
}

void Increment_Decrement_Seven_Segement(unsigned char*num,Count_State State)
{
	if(State == Increment)
	{
	if(*num !=9)
{
	*(num)+=1;
 }
	}
	else if (State == Decrement)
	{
		if(*num !=0)
		{
			*(num)-=1;
		 }


	}

	switch(*num)
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



