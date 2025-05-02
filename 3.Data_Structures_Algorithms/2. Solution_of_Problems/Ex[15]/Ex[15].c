#include<stdio.h>
#include<stdlib.h>
void Concat(char*,char*,char*);
#define SIZE 20
#define SIZE2 25
#define SIZE3 100
int main(void)
{char Name[SIZE],Name2[SIZE2],Name3[SIZE3];
scanf("%s %s",Name,Name2);
Concat(Name,Name2,Name3);
fflush(stdout);
printf("%s\t%s\t%s",Name,Name2,Name3);
}
void Concat(char*Name1,char*Name2,char*Name3)
{char*Storing=Name3;
char*Name1_Ptr=Name1;
char*Name2_Ptr=Name2;
while(*(Name1_Ptr)!='\0')
{ *Storing=*Name1_Ptr;
	Storing++;
	Name1_Ptr++;
}
while(*(Name2_Ptr)!='\0')
{ *Storing=*Name2_Ptr;
	Storing++;
	Name2_Ptr++;
}
*Storing='\0';
}
