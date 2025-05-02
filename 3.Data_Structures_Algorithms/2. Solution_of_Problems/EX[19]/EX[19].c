#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
char Comp(int*,int*,int);
int main(void)
{ int Arr1[MAX_SIZE],Arr2[MAX_SIZE];
printf("Enter the Elements of the First Array ");
fflush(stdout);
for(int i=0;i<MAX_SIZE;++i)
	scanf("%d",Arr1+i);
printf("Enter the Elements of the Second Array ");
fflush(stdout);
for(int i=0;i<MAX_SIZE;++i)
	scanf("%d",Arr2+i);

char Bool;
Bool=Comp(Arr1,Arr2,MAX_SIZE);
if(Bool)
{
	printf("The Two Arrays are Identical");
}
else
	printf("The Two Arrays are not Identical");




}
char Comp(int*Ptr2Arr1,int*Ptr2Arr2,int Size)
{ char bool=1,i;
	for(i=0;i<Size;++i)
	{
		if(Ptr2Arr1[i]!=Ptr2Arr2[i])
		{bool=0;
			break;
		}
	}

	return bool;
}
