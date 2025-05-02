#include<stdio.h>
#include<stdlib.h>
char Check(int);
int main(void)
{ int x;
char temp;
	scanf("%d",&x);
	temp=Check(x);
	if(temp)
	printf("This number can be Written in form of p^q");
	else
		printf("This number cannot be Written in form of p^q");
}
char Check(int x)
{ int i,temp;
char f=1;

	if( x==0 || x==1)
	{
		return 0;
	}
	for( i=2;i<x;i++)
	{ temp=x;
	f=1;
	while(temp!=0)
	{
	if((temp%i)!=0 && temp!=1)
	{
		f=0;

	}
		temp/=i;

	}
	 if(f==1)
		return f;

	}
	return f;



}
