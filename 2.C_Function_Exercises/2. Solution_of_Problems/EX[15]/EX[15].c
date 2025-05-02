#include<stdio.h>
#include<stdlib.h>
int count(unsigned int);
int main(void)
{ unsigned int x=0x00000FFF;

printf("The number of ones is equal to %d",count(x));


}
int count( unsigned int x)
{  unsigned int Mask=0x80000000;
int c=0,i;
for(i=0;i<32;++i)
{Mask>>=1;
if(x&Mask) // Could be ((Mask>>i)&x) and remove the Above line to preserve your Mask;
{c++;
}
}
return c;
}

