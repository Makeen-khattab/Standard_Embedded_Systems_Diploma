#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	/* Application initialization*/
	DDRD&=~(1<<4);
    DDRC|=0x0F;
    PORTC &= 0xF0;
    unsigned char num=1;
   unsigned char flag =1;
	/* Super_Loop*/
				while(1)
				{

if((PIND &(1<<4) )&& flag)
{
	_delay_ms(30);
	if((PIND & (1<<4)) && flag )
	{
		PORTC=(0xF0 & PORTC) | (0X0F & (num));

		if(num==9)
		{
			num=0;

		}
		else
		num++;

		flag=0;
	}
}
else if(!(PIND &(1<<4)))
	flag=1;


				}

}

