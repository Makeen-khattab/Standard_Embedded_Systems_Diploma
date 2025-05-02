#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char Heating_Time(int);
int main(void)
{int x;
scanf("%d",&x);
printf("Heating time required is equal to % d min",Heating_Time(x));
}
char Heating_Time(int x)
{ char c;
	if(x>100)
	{
		c=0;
	}
	else if(x>90)
		{
		c=1;
		}
	else if(x>=60)
	{
		c=3;

	}
	else if(x>=30)
	{
		c=5;
	}
	else if(x>=0)
	{
		c=7;
	}

	return c;


}
