#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 8
int Search_Linear(int*,int);
int main()
{
	int Arr[MAX_SIZE],i,Index,Target;
	printf("Enter the Array Elements");
	fflush(stdout);
	for(i=0;i<MAX_SIZE;++i)
	{
		scanf("%d",Arr+i);
	}
	fflush(stdout);
	printf("Enter the Target");
	scanf("%d",&Target);
	Index=Search_Linear(Arr,Target);
	if(Index!=-1)
	{
		printf("The Element Found At Index %d",Index+1);

	}
	else
		printf("The Element Not Found");
}
int Search_Linear(int*Ptr2Arr,int Target)
{int i,Index=-1;
	for(i=MAX_SIZE-1;i>0;--i)
	{
		if(Target==Ptr2Arr[i])
	{
		Index=i;
	              break;
	}
	}
	return Index;
}

