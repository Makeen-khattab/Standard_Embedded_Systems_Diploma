#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
void Copy_Array_into_Array(int*,int);
int main(void)
{ int Arr1[MAX_SIZE],i;
for(i=0;i<MAX_SIZE;++i)
	{
		scanf("%d",Arr1+i);
	}

Copy_Array_into_Array(Arr1,MAX_SIZE);

}
void Copy_Array_into_Array(int*Ptr1,int Size)
{ int i,Max;
Max=Ptr1[0];
	for(i=1;i<Size;++i)
	{
		if(Ptr1[i]>Max)
		{
			Max=Ptr1[i];
		}
		printf("%d ",Ptr1[i]);
	}

	printf("\n %d",Max);

}
