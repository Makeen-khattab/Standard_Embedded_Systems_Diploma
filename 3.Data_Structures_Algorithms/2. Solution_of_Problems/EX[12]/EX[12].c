#include<stdio.h>
#include<stdlib.h>
char String_Length(char*);
#define SIZE 20
int main(void)
{char Name[SIZE],Length;
scanf("%s",Name);//scanf("%s",&name);
Length=String_Length(Name);
printf("%d",Length);
}
char String_Length(char*temp)//void Freq(char temp[],char letter)
{ char counter=0;
	while(*(temp)!='\0')
	{
      counter++;
      temp++;
	}

return counter;
}
