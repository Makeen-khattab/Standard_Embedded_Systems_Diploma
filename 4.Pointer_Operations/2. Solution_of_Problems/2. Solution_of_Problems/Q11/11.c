#include<stdio.h>
#include<stdlib.h>
int main(void)
{int x=5;
short *ptr1,*ptr2,temp;
ptr1=(short*)&x;
ptr2=(short*)(ptr1+1);
printf("%d \n",x);
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("%d",x);
}
