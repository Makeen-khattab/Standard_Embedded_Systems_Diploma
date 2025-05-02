#include<stdio.h>
#include<stdlib.h>
void Reverse_Array(int*);
#define SIZE 20
int main(void)
{int Array[SIZE],i;
for(i=0;i<SIZE;++i)
{
	scanf("%d",Array+i);

}
for(i=0;i<SIZE;++i)
{
	printf("%d ",Array[i]);

}
printf("\n");
Reverse_Array(Array);
fflush(stdout);
for(i=0;i<SIZE;++i)
{
	printf("%d ",Array[i]);

}

}
void Reverse_Array(int*Str)//void Freq(char temp[],char letter)
{ int*Beg_Str=Str,*End_Str=Str,temp,i;

for(i=0;i<SIZE-1;++i)
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
