#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 8
void Sort_Bubb(int*);//void Sort(int[]);
void Swap(int*,int*);
int main()
{ int Arr[MAX_SIZE],i;
for(i=0;i<MAX_SIZE;++i)
{
	scanf("%d",Arr+i);
}
Sort_Bubb(Arr);
for(i=0;i<MAX_SIZE;++i)
{
	printf("%d ",*(Arr+i));//	printf("%d",Arr[i]); printf("%d",[1]Arr);
}

}
void Sort_Bubb(int*Ptr2Arr)
{int i,j;
for(i=0;i<MAX_SIZE-1;++i)
	for(j=0;j<MAX_SIZE-1-i;++j)
	{
	if(Ptr2Arr[j]>Ptr2Arr[j+1])
		Swap(Ptr2Arr+j,Ptr2Arr+j+1);
	}
}
void Swap(int*v,int*u)
{int Temp;
Temp=*v;
*v=*u;
*u=Temp;
}
