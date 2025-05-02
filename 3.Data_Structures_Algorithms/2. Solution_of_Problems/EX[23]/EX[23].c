#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 256
void Freq_Array(unsigned char*,unsigned char*);
int main(void)
{ unsigned char arr[MAX_SIZE]={0},Name[MAX_SIZE],i;
	scanf("%s",Name);//scanf("%s",&arr)
	Freq_Array(Name,arr);
	for(i=0;i< MAX_SIZE-1;++i)
	{
		printf("%c %d \n",i,arr[i]);
	}
}
void Freq_Array(unsigned char*Ptr2Name,unsigned char*Ptr2Freq)
{
	while(*(Ptr2Name)!='\0')
	{
		Ptr2Freq[*(Ptr2Name)]++;

		Ptr2Name++;
	}



}
