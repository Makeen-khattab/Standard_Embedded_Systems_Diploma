#include<stdio.h>
#include<stdlib.h>
char Check_Distinct(char*);
#define MAX_SIZE 50
int main(void)
{ char Bool;
	char string[MAX_SIZE];
	scanf("%s",string);
	Bool=Check_Distinct(string);//Check_Distinct(&string)
	if(Bool==1)
	{

	printf("The string doesn't have any Repeated characters");
	}
	else if(Bool==0)
	{

		printf("The string have Repeated characters");

	}
	else
		printf("You Entered invalid Character");

}
char Check_Distinct(char*string)
{unsigned char Freq[52]={0},i;
	char Begin_Small='a';
	char Begin_Capital='A';
	char End_Small='z';
	char End_Capital='Z';
	while(*(string)!='\0')
	{ if(*(string)>=Begin_Small ||*(string)<=End_Small )
	{
		Freq[*(string)-Begin_Small]++;

	}
	else if(*(string)>=Begin_Capital ||*(string)<=End_Capital )
	{

		Freq[*(string)-Begin_Capital+26]++;

	}
	else
		return -1;
	string++;
	}

	for(i=0;i<52;++i)
	{ if(Freq[i]>1)
		return 0;
	}

	return 1;

}




