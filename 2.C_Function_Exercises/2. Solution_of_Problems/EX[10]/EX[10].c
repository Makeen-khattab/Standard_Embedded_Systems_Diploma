#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char holes(int );
char Is_even(int);
int main(void)
{int x;
scanf("%d",&x);
printf("%d \n Holes are %d",x,holes(x));


}
char holes(int i )
{ char digit,c=0;
if(i==0)
	return 1;
while(i!=0)
{ digit=i%10;
i/=10;

 if(digit==8)
	c+=2;
 else if(digit==9)
	 c++;
else if( Is_even(digit) && digit!=2)
{
	c++;
}

}
return c;

}



char Is_even(int i)
{

i=(i%2==0)? 1:0;
	return i;
}

