#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void swap(int*,int*);
int main(void)
{int x,y;
scanf("%d %d",&x,&y);
printf("%d %d \n",x,y);
swap(&x,&y);
printf("%d %d",x,y);
}
void swap(int*x,int*y)
{int temp;
temp=*(x);
*(x)=*(y);
*(y)=temp;
}
/**********************************************************
 ***** Another Method without using the Temp variable *****

void swap(int *ptr1, int *ptr2)
{
	int temp;
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}
حلوة
************************************************************/
