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
{ int i,Last=1,Before_Last=0,Fib;
	if(Index==0||Index==1)
{
	return Index;

}
	for(i=2;i<=Index;++i)
	{ Fib=Last+Before_Last;
	 Before_Last=Last;
	 Last=Fib;
	}
	return Fib;
}



