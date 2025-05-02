#include<stdio.h>
#include<stdlib.h>

unsigned int g_mask=0x80000000;
int main(void)
{
	int max =0 , temp=0,i;
	unsigned  long x = 0xA21417A3;

	for(i=0;i<32;++i)
	{
		if((g_mask>>i)&x)
		{
			temp=0;

		}
		else if((((g_mask>>i)&x))==0)
		{
			temp++;


		}
		if(temp>max){

			max=temp;

		}




	}
	printf("%d",max);




}
