#include<stdio.h>
#include<stdlib.h>
void Freq(char*,char);
#define SIZE 20
int main(void)
{char name[SIZE],letter;
scanf("%s %c",name,&letter);//scanf("%s",&name);
Freq(name,letter);
}
void Freq(char*temp,char letter)//void Freq(char temp[],char letter)
{ char counter=0;
	while(*(temp)!='\0')
	{ if(*(temp)==letter)
	{
		counter++;

	}
		temp++;

	}

	printf("%d",counter);

}
