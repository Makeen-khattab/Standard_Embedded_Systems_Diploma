#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 8
void Sort_Linear(int*);//void Sort(int[]);
void Swap(int*,int*);
int main()
{ int Arr[MAX_SIZE],i;
for(i=0;i<MAX_SIZE;++i)
{
	scanf("%d",Arr+i);
}
Sort_Linear(Arr);
for(i=0;i<MAX_SIZE;++i)
{
	printf("%d ",*(Arr+i));
}

}
void Sort_Linear(int*Ptr2Arr)
{int i,j,*Min;
for(i=0;i<MAX_SIZE;i++)
{ Min=Ptr2Arr+i;
	for(j=i+1;j<MAX_SIZE;++j)
	{
		if(Ptr2Arr[j]<*Min)
		{
			Min=Ptr2Arr+j;

		}
	}
	Swap(Min,Ptr2Arr+i);
}
}
void Swap(int*v,int*u)
{int Temp;
Temp=*v;
*v=*u;
*u=Temp;
}
