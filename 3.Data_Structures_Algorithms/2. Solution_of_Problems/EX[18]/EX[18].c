#include<stdio.h>
#include<stdlib.h>
char Freq(int*,int);
#define MAX_SIZE 20
int main()
{ int Arr[MAX_SIZE],i,Target;
for(i=0;i<MAX_SIZE;++i)
{
	scanf("%d",Arr+i);
}
fflush(stdout);
printf("Enter the Target");
scanf("%d",&Target);
fflush(stdout);
printf("%d",Freq(Arr,Target));
}
char Freq(int*Ptr,int Target)
{int i,Max_No=0,Temp=0;
	for(i=0;i<MAX_SIZE;++i)
	{
		if(Ptr[i]==Target)
	{Temp++;

	}
		else
		{
			Max_No=Temp;
			Temp=0;
		}
	}

	return Max_No ;
}
