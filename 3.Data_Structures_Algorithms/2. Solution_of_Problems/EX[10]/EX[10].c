#include<stdio.h>
#include<stdlib.h>
void Upp(char*);
#define SIZE 20
int main(void)
{char Name[SIZE];
scanf("%s",Name);//scanf("%s",&name);
Upp(Name);
printf("%s",Name);
}
void Upp(char*temp)//void Freq(char temp[])
{ char Beg_Upp ='A';
char End_Upp='Z';
char Offset= 'a'-'A';

	while(*(temp)!='\0')
	{ if(*(temp)>=Beg_Upp && *(temp)<=End_Upp)
	{
		*temp+=Offset;

	}
		temp++;

	}

}
