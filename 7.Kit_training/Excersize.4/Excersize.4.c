#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	/* Application initialization*/
	DDRB&=~(1<<0);
	PORTB|=1<<0;//Internal Pull_UP
	DDRC|=(1<<0);
	PORTC|=(1<<0);
char flag=1;

	/* Super_Loop*/
	while(1)
	{

if(!(PINB&(1<<0))&&flag)
{
	_delay_ms(30);
	if(!(PINB&(1<<0))&&flag)
	{
		PORTC^=(1<<0);
		flag=!flag;

	}


}
else if(PINB&(1<<0))
{
	flag=1;

}




	}







}
