#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int h,i,j;
scanf("%d",&h);
for(i=1;i<=h;++i)
{
for(j=1;j<=h-i+1;++j)
{
printf("*");
}
printf("\n");
}
}
