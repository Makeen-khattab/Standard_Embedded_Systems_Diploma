#include<stdio.h>
#include<stdlib.h>
int main(void){
int x,y;
scanf("%d %d",&x,&y);
if(x==y)
{
printf("X and Y are Equal");
}
else if(x>y)
{
	printf("X is greater than Y");
}
else if(x<y)
{
	printf("X is Smaller than Y");
}
else
printf("X is not Equal Y");


}


