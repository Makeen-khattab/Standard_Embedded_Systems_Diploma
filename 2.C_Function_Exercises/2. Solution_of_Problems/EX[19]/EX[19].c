#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char Is_Pow_Of_Three (int );
int main(void)
{int x;
char c;
scanf("%d",&x);
c=Is_Pow_Of_Three(x);
if(c!=-1)
{
	printf("Is a 3^%d",c);
}
else
	printf("Not a Power of 3");
}
char Is_Pow_Of_Three (int x)
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
{ if(x%3!=0)
{
	return -1;

}
x/=3;
c++;

}
return c;

}
