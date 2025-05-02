#include<stdio.h>
#include<stdlib.h>
int main(void)
{ int Grade;
	scanf("%d",&Grade);
	if(Grade>=85)
	{
		printf("Excellent");
	}
	else if(Grade>=75)
		{
			printf("Very Good");
		}
	else if(Grade>=65)
		{
			printf("Good");
		}

	else if(Grade==50)
		{
			printf("Pass");
		}
	else
		printf("Fail");





}


