#include<stdio.h>
#include<stdlib.h>
long Fib(long);
int main(void)
{long x;
scanf("%ld",&x);
fflush( stdout );
printf("Fib of the number is %ld",Fib(x));


}
long Fib(long f)
{
	if(f==1 || f==0)
		return f;
	return Fib(f-1)+Fib(f-2);
}
