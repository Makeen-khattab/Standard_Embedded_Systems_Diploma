#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
void Copy_Array_into_Array(int*,int*,int);
int main(void)
{ int Arr1[MAX_SIZE],Arr2[MAX_SIZE],i;
for(i=0;i<MAX_SIZE;++i)
	{
		scanf("%d",Arr1+i);
	}

Copy_Array_into_Array(Arr1,Arr2,MAX_SIZE);
for(i=0;i<MAX_SIZE;++i)
	{
		printf("%d ",Arr2[i]);

	}
}
void Copy_Array_into_Array(int*Ptr1,int*Ptr2,int Size)
{ int i;
	for(i=0;i<Size;++i)
	{
		Ptr2[i]=Ptr1[i];
	}
}
