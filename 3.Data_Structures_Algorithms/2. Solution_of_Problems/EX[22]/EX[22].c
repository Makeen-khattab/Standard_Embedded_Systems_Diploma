#include<stdio.h>
#include<stdlib.h>
void Sort_Bubb(int*);//void Sort(int[]);
void Swap(int*,int*);
#define MAX_SIZE 20
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new);
int main(void)
{
	int arr_old[MAX_SIZE]={1,2,4,4,5,5,2,8,8,8,9,1,1,1,1,10,11},arr_new[MAX_SIZE],*n_new,Bool,i,x;
	n_new=&x;
	Bool=removeDuplicates(arr_old,MAX_SIZE,arr_new,n_new);
	if(Bool)
	{
		for(i=0;i<*n_new;++i)
		{
			printf("%d",*(arr_new+i));

		}
	}
	else
		printf("Error");



}

int removeDuplicates(int*arr_old, int n_old, int*arr_new, int *n_new)
{ int i;
*n_new=0;
	Sort_Bubb(arr_old);
	if(!n_old)
	{


	}
	else
		for(i=0;i<n_old;++i)
	{
		if(arr_old[i]!=arr_old[i+1])
		{
			arr_new[(*n_new)]=arr_old[i];

			(*n_new )++;

		}

	}

	return *(n_new);

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
