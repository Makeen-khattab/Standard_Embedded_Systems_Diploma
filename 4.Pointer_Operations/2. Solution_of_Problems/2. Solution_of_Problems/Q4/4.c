#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int main(void)
{ int Arr[MAX_SIZE],i,*Ptr2Arr;


	for(i=0;i<MAX_SIZE;++i)
	{
		scanf("%d",Arr+i);
	}
	Ptr2Arr=Arr;
	for(i=MAX_SIZE-1;i>=0;--i)
	{
		printf("%d ",Ptr2Arr[i]);

	}


}
