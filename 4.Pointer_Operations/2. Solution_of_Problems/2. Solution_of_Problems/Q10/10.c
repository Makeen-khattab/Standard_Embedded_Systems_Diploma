#include<stdio.h>
#include<stdlib.h>
void Swap_Pointer(int**,int**);
int main(void)
{ int x=5,y=7,*ptr1,*ptr2;
	ptr1=&x;
	ptr2=&y;
	printf("Content ptr1 pointing to %d Content ptr2 pointing to %d",*ptr1,*ptr2);
	Swap_Pointer(&ptr1,&ptr2);
	printf("Content ptr1 pointing to %d Content ptr2 pointing to %d",*ptr1,*ptr2);

}

void Swap_Pointer(int**Ptr2Ptr1,int**Ptr2Ptr2)
{ int*tempPtr;
tempPtr=*Ptr2Ptr1;
*Ptr2Ptr1=*Ptr2Ptr2;
*Ptr2Ptr2=tempPtr;
}
