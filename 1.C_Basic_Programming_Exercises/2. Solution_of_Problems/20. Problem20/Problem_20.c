#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;++i)
	{
		for(k=1;k<h-i+1;++k)
		{
			printf(" ");
		}
	for(j=1;j<=2*i-1;++j)
	{
	printf("*");
	}
	printf("\n");

	}
	}
