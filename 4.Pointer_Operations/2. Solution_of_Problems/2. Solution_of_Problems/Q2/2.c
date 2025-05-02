#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
char Length_Of_String(char*);
int main(void)
{ char Name[MAX_SIZE];

scanf("%s",Name);

printf("The Length of string is equal to %d",Length_Of_String(Name));
}
char Length_Of_String(char*Ptr2Str)
{char Length=0;
	while(*Ptr2Str!='\0')
	{


		Ptr2Str++;
		Length++;
	}
	return Length;
}
