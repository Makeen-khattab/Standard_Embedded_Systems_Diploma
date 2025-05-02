#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int Smallest_ELement(int*,int);
int main(void)
{
	int Array[MAX_SIZE],i;
	for(i=0;i<MAX_SIZE;++i)
	{
		scanf("%d",Array+i);
	}

	printf("The smallest Element in the Array is Equal to %d",Smallest_ELement(Array,MAX_SIZE));


}
int Smallest_ELement(int*Ptr2Arr,int Size)
{ int min=Ptr2Arr[0],i;
	for(i=1;i<Size;++i)
	{
		if(Ptr2Arr[i]<min)
		{
			min=Ptr2Arr[i];
		}
	}

	return min;
}
