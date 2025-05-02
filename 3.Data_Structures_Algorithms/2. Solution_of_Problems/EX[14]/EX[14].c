#include<stdio.h>
#include<stdlib.h>
void Reverse_String(char*);
#define SIZE 20
int main(void)
{char Name[SIZE];
scanf("%s",Name);//scanf("%s",&name);
Reverse_String(Name);
fflush(stdout);
printf("%s",Name);
}
void Reverse_String(char*Str)//void Freq(char temp[],char letter)
{ char*Beg_Str=Str,*End_Str=Str,temp;

while(*(End_Str+1)!='\0')
{
	End_Str++;
}
	while((End_Str-Beg_Str)>=1)
	{temp=*End_Str;
	*End_Str=*Beg_Str;
	*Beg_Str=temp;
	Beg_Str++;
	End_Str--;
	}
}
