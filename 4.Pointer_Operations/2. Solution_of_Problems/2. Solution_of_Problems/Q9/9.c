#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
void New_String (char*,char*);
int main(void)
{ char Name[MAX_SIZE],Name2[3];
scanf("%s",Name);
 New_String(Name,Name2);
	printf("%s",Name2);
}
void New_String (char*Ptr2Name1,char*Ptr2Name2)
{
	while(*Ptr2Name1!='\0')
	{
		Ptr2Name1++;
	}
	*Ptr2Name2=*--Ptr2Name1;
	Ptr2Name2++;
	*Ptr2Name2=' ';
	Ptr2Name2++;
	*Ptr2Name2=*--Ptr2Name1;
	Ptr2Name2++;
	*Ptr2Name2='\0';
}
