#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char Is_Pow_Of_Two (int );
int main(void)
{int x;
char c;
scanf("%d",&x);
c=Is_Pow_Of_Two(x);
if(c!=-1)
{
	printf("Is a 2^%d",c);
}
else
	printf("Not a Power of 2");
}
char Is_Pow_Of_Two (int x)
{char c=0;
if(x==0)
{
	return -1;
}
	if(x==1)
{
	return c;

}
while(x!=1)
{ if(x%2!=0)
{
	return -1;

}
x/=2;
c++;

}
return c;

}
