#include<stdio.h>
#include<stdlib.h>
#define unchar unsigned char
char count(unchar);
int main(void)
{ unchar x=0x0F;

printf("The number of ones is equal to %d",count(x));


}
char count(unchar x)
{  unchar Mask=0x80;
char c=0,i;
for(i=0;i<8;++i)
{
if((Mask>>i)&x)
{
c++;
}
}
return c;
}

