#include<stdio.h>
#include<stdlib.h>
int main(void)
{ int x,i;
char f=0;
scanf("%d",&x);

	for(i=2;i<x;++i)
	{
		if(x%i==0)
		{ f=1;
			break;
		}
	}
	if(!f || x==2 || x==1)
	{
	printf("prime");
	}
	else
		printf("not");

}
