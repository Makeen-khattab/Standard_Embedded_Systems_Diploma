#include<stdio.h>
#include<stdlib.h>
int main(void)
{ int x,y=0;
scanf("%d",&x);
while(x!=0)
{
	y=(y*10)+x%10;
	x/=10;
}
printf("%d",y);

}
