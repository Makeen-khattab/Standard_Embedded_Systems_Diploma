#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int x;
scanf("%d",&x);
if(sqrt(x)-floor(sqrt(x))==0)
{
	printf("This number is perfect Square");
}
else
	printf("This number is not a perfect Square");


}


