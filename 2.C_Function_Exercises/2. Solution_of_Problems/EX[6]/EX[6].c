#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char Upper_Case(char);
int main(void)
{ char c;
scanf("%c",&c);
	printf("%c",Upper_Case(c));

}
char Upper_Case(char c)
{
char ref='a'-'A';
	return c-ref;

}
