#include<stdio.h>
#include<stdlib.h>
typedef unsigned char uint8;
#define MAX_SIZE 256
int In_Between(int *,int ,int );
int main(void)
{
	int Higher_Value,Lower_Value,Arr[MAX_SIZE ],i,Size;
	scanf("%d %d",&Higher_Value,&Lower_Value);
	Size=In_Between(Arr,Higher_Value,Lower_Value);
	if(Size<0)
	{
		printf("%x %x",Arr[0],Arr[1]);
	}
	else
		{for(i=0;i<Size;++i)
		{
			printf("%d ",Arr[i]);

		}}
}
int In_Between(int *Ptr2Arr,int Higher_Value ,int Lower_Value)
{ int i,c=0;
	if((Lower_Value>Higher_Value) )
	{
		Ptr2Arr[0]=0xFF;// *Ptr2Arr=0xFF;
		Ptr2Arr[1]=0xFF;//*(Ptr2Arr+1)=0xFF;
		c=-1;
	}
	else{
		for(i=Higher_Value;i>=Lower_Value;--i)
		{
			Ptr2Arr[c]=i;
			c++;
		}}

	return c;



}
