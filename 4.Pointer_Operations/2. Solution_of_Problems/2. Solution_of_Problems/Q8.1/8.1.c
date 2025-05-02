#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
void Swap_Array_to_Array(int*,int*,int);
void Swap(int*,int*);
int main(void)
{ int Arr1[MAX_SIZE],Arr2[MAX_SIZE],i;
for(i=0;i<MAX_SIZE;++i)
	{
		scanf("%d",Arr1+i);
	}
for(i=0;i<MAX_SIZE;++i)
	{
		scanf("%d",Arr2+i);
	}

Swap_Array_to_Array(Arr1,Arr2,MAX_SIZE);
for(i=0;i<MAX_SIZE;++i)
	{
		printf("%d ",Arr1[i]);

	}
printf("\n");
for(i=0;i<MAX_SIZE;++i)
	{
		printf("%d ",Arr2[i]);

	}
}
void Swap_Array_to_Array(int*Ptr1,int*Ptr2,int Size)
{ int i;
	for(i=0;i<Size;++i)
	{
		Swap(Ptr1+i,Ptr2+i);
	}
}
void Swap(int*Ptr1,int*Ptr2)
{
	*Ptr1=*Ptr1 ^ *Ptr2;
	*Ptr2=*Ptr1 ^ *Ptr2;
	*Ptr1=*Ptr1 ^ *Ptr2;
}
