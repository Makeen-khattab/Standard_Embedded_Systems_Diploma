#include<stdio.h>
#include<stdlib.h>
void Remove_Symbols(char*);
#define SIZE 20
int main(void)
{char Name[SIZE];
scanf("%s",Name);//scanf("%s",&name);
Remove_Symbols(Name);
printf("%s",Name);
}
void Remove_Symbols(char*temp)//void Freq(char temp[])
{ char Beg_Upp ='A';
char End_Upp='Z';
char Beg_Low ='a';
char End_Low ='z';
char*mov;
	while(*(temp)!='\0')
	{ mov=temp;
		if((*(temp)<Beg_Upp || *(temp)>End_Upp) && (*(temp)<Beg_Low || *(temp)>End_Low))
	{ while(*(mov+1)!='\0')
	{ mov[0]=mov[1]; // *mov=*(mov+1), As we said that we aggregate the name of array(pointer) + the number inside the square Brackets and derefence it

		mov++;
	}
		*mov='\0';
	temp--;// If there are Two consecutive Symbols
	}
		temp++;
	}
}


