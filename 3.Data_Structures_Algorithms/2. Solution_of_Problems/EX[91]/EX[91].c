#include<stdio.h>
#include<stdlib.h>
int Fibb(int);
int main()
{ int Index_Fib;
long long Fib;
scanf("%d",&Index_Fib);

Fib= Fibb(Index_Fib);
printf("%lld",Fib);
}
int Fibb(int Index)
{
	if(Index==0||Index==1)
{
	return Index;
}
	return Fibb(Index-2)+Fibb(Index-1);

}



