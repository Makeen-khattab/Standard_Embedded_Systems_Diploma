#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char Check(int);
int main(void)
{int num;
scanf("%d",&num);
if(Check(num)==1)
{
printf("Positive");
}
else if(Check(num)==0)
{
	printf("Negative");
}
else
	printf("Neither");
}
char Check(int num)
{ if(num>0)
	return 1;
	else if(num<0)
		return 0;
	return -1;
}
