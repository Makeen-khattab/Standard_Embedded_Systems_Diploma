#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
long long Sum_Of_Array(int*,int);
int main(void)
{ int Array[ MAX_SIZE],i;
long long Sum_of_Array;
printf("Enter the Elements Array");
fflush(stdout);
for(i=0;i< MAX_SIZE;++i)
{
	scanf("%d",Array+i);
}

Sum_of_Array=Sum_Of_Array(Array,MAX_SIZE);

	printf("Sum of Array is Equal to %lld",Sum_of_Array);
}
long long Sum_Of_Array(int*Ptr2Array,int Size)
{ int i;
long long Sum_Of_Array=0;
	for(i=0;i<Size;++i)
	{
		Sum_Of_Array+=Ptr2Array[i];
	}

	return Sum_Of_Array;
}
