#include "sevensegment.h"
#include<avr/interrupt.h>
void Timer0_INIT(void);


unsigned char num1=0;
int main(void)
{
	Timer0_INIT();
	SEVENSEGMENT_init();
	while(1)
	{


	}




}

ISR(TIMER0_OVF_vect)
{
	num1++;
	if(num1==244) // Approx 1 sec.
	{
		num1=0;
		SEVENSEGMENT_increment();

	}

}

void Timer0_INIT(void)
{
	SREG|=1<<7;
	TCCR0= (1<<FOC0)| (1<<CS02);//256 prescaler
	TCNT0=0;
	TIMSK|=1<<TOIE0;
}

//void Turn_On_Seven_Segement(void)
//{
//	DDRA|=0xFE;
//	PORTA=(PORTA&(0x01)) | 0x7E; 0111 1110
//	DDRC|=1<<6;
//	PORTC|=(1<<6);
//}
//
//void Increment_Seven_Segement(unsigned char*num)
//{
//	if(*num==9)
//	{
//		*num=0;
//		}
//		else
//		*(num)+=1;
//
//	switch(*num)
//	{
//	case 0 :
//		PORTA=(PORTA&(0x01)) | 0x7E;
//				break;
//	case 1 :
//		PORTA=(PORTA&(0x01)) | 0x0C;
//		break;
//	case 2 :
//		PORTA=(PORTA&(0x01)) | 0xB6;
//		break;
//	case 3 :
//		PORTA=(PORTA&(0x01)) | 0x9E;
//		break;
//	case 4 :
//			PORTA=(PORTA&(0x01)) | 0xCC;
//			break;
//	case 5 :
//			PORTA=(PORTA&(0x01)) | 0xDA;
//			break;
//	case 6 :
//			PORTA=(PORTA&(0x01)) | 0xFA;
//			break;
//	case 7 :
//			PORTA=(PORTA&(0x01)) | 0x0E;
//			break;
//	case 8 :
//			PORTA=(PORTA&(0x01)) | 0xFF;
//			break;
//	case 9 :
//			PORTA=(PORTA&(0x01)) | 0xCF;
//			break;
//
//
//	}
//
//	}
//void Decrement_Seven_Segement(unsigned char*num)
//{
//	if(*num !=0)
//{
//	*(num)-=1;
// }
//	switch(*num)
//	{
//	case 1 :
//		PORTA=(PORTA&(0x01)) | 0x0C;
//		break;
//	case 2 :
//		PORTA=(PORTA&(0x01)) | 0xB6;
//		break;
//	case 3 :
//		PORTA=(PORTA&(0x01)) | 0x9E;
//		break;
//	case 4 :
//			PORTA=(PORTA&(0x01)) | 0xCC;
//			break;
//	case 5 :
//			PORTA=(PORTA&(0x01)) | 0xDA;
//			break;
//	case 6 :
//			PORTA=(PORTA&(0x01)) | 0xFA;
//			break;
//	case 7 :
//			PORTA=(PORTA&(0x01)) | 0x0E;
//			break;
//	case 8 :
//			PORTA=(PORTA&(0x01)) | 0xFF;
//			break;
//	case 9 :
//			PORTA=(PORTA&(0x01)) | 0xCF;
//			break;
//
//	}
//
//
//}

