#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int x,i;
long long fact=1;
scanf("%d",&x);
if(x>0)
{
for(i=2;i<=x;++i)
{
	fact*=i;
}
	printf("%lld",fact);
}
else
{
	printf("number is less than or equal zero");
}


}


