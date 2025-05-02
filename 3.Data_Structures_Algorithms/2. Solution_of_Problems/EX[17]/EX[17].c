#include<stdio.h>
#include<stdlib.h>
#define Max_SizeA 6
#define Max_SizeB 5
int * Swap(int a_size,int *a,int b_size,int *b);
int main(void)
{ int Arr1[Max_SizeA],Arr2[Max_SizeB];
for(int i=0;i<Max_SizeA;++i)
{
	scanf("%d",Arr1+i);
}
for(int i=0;i<Max_SizeB;++i)
{
	scanf("%d",Arr2+i);
}


for(int i=0;i<Max_SizeA;++i)
{
	printf("%d ",Arr1[i]);
}
printf("\n");
for(int i=0;i<Max_SizeB;++i)
{
	printf("%d ",Arr2[i]);
}
printf("\n");
int*x = Swap(Max_SizeA,Arr1,Max_SizeB,Arr2);
for(int i=0;i<Max_SizeA;++i)
{
	printf("%d ",Arr1[i]);
}
printf("\n");
for(int i=0;i<Max_SizeB;++i)
{
	printf("%d ",Arr2[i]);
}


}
int*Swap(int a_size,int *a,int b_size,int *b)
{ int temp,i;
for(i=0;i<b_size;++i)
{ temp=*(a+i);
*(a+i)=*(b+i);
*(b+i)=temp;
}
return a;
}
