#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int Spl,Spb,H,i;
scanf("%d",&H);
	for( i=0;i<H;++i)
	{
if(i<H/2)
{
		for(Spl=0;Spl<i;++Spl)
		{ printf(" ");

		}
		printf("*");
	for(Spb=0;Spb<(H-1)-2*Spl;++Spb)
	{

		 printf(" ");

	}
	printf("*");
	printf("\n");
}
else
{
	for(Spl=0;Spl<H-i-1;++Spl)
			{ printf(" ");

			}
			printf("*");
		for(Spb=0;Spb<(H-1)-2*Spl;++Spb)
		{

			 printf(" ");

		}
		printf("*");
		printf("\n");
	}


	}
}











