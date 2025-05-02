#include<stdio.h>
#include<stdlib.h>
void Sort_Bubb(int*,int);//void Sort(int[]);
void Swap(int*,int*);
#define MAX_SIZE
int Odd(int*,int);
int main(void){
int arr[MAX_SIZE] = {1,2,3,1,2,3,1,1,1,1,3,3,3};

	int num = Odd(arr,13);

	printf("number is : %d",num); /* It should be 3 */

	return 0;



}
int Odd(int*Ptr2Arr,int Size)
{int i,c=1;
	Sort_Bubb(Ptr2Arr,Size);
	for(i=0;i<Size;++i)
	{ if(Ptr2Arr[i]==Ptr2Arr[i+1])
	{
		c++;
	}
	else if(c%2==1)
	{
		return Ptr2Arr[i];
	}
	else
		c=1;



	}

}
void Sort_Bubb(int*Ptr2Arr,int size)
{int i,j;
for(i=0;i<size-1;++i)
	for(j=0;j<size-1-i;++j)
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
