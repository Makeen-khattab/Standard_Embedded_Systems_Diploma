#include<avr/io.h>
#include<util/delay.h>
void Turn_On_Seven_Segement(void);
void Increment_Seven_Segement(unsigned char*num);
void Decrement_Seven_Segement(unsigned char*num);
int main(void)
{
	/* Application initialization*/
	/* Super_Loop*/
	DDRD&=(~(1<<2)) & (~(1<<3));
	Turn_On_Seven_Segement();
	unsigned char num=0;
	unsigned char flag=1;

	 while(1)
	 {
		 if(!(PIND &(1<<3) ))
				{ if (flag)
				{

							_delay_ms(30);
							if(!(PIND & (1<<3)) )
							{
								Increment_Seven_Segement(&num);

							}

flag=0;
				}

						}
		 else if(!(PIND &(1<<4) ))
		 				{ if(flag){
		 							_delay_ms(30);
		 							if(!(PIND & (1<<4)) && flag )
		 							{
		 								Decrement_Seven_Segement(&num);


		 							}
		 flag=0;
		 				}
		 						}
		 else
			 flag=1;



					}

}
void Turn_On_Seven_Segement(void)
{
	DDRA|=0xFE;
	PORTA=(PORTA&(0x01)) | 0x7E;
	DDRC|=1<<6;
	PORTC&=~(1<<6);
}

void Increment_Seven_Segement(unsigned char*num)
{
	if(*num !=9)
{
	*(num)+=1;
 }
	switch(*num)
	{
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
			PORTA=(PORTA&(0x01)) | 0xFF;
			break;
	case 9 :
			PORTA=(PORTA&(0x01)) | 0xCF;
			break;


	}

	}
void Decrement_Seven_Segement(unsigned char*num)
{
	if(*num !=0)
{
	*(num)-=1;
 }
	switch(*num)
	{
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
			PORTA=(PORTA&(0x01)) | 0xFF;
			break;
	case 9 :
			PORTA=(PORTA&(0x01)) | 0xCF;
			break;

	}


}



