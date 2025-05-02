#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long Cube(long);
int main(void)
{long num;
scanf("%ld",&num);
printf("The cube number is %lld",Cube(num));
}

long long Cube(long num)
{
	return num*num*num;
}
