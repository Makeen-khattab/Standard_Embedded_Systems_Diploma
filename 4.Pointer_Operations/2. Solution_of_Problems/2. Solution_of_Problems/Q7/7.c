#include<stdio.h>
#include<stdlib.h>
void Swap(int*,int*);
int main(void)
{ int x,y;

scanf("%d %d",&x,&y);
Swap(&x,&y);
printf("%d %d ",x,y);

}
void Swap(int*Ptr1,int*Ptr2)
{
	*Ptr1=*Ptr1 ^ *Ptr2;
	*Ptr2=*Ptr1 ^ *Ptr2;
	*Ptr1=*Ptr1 ^ *Ptr2;
}
