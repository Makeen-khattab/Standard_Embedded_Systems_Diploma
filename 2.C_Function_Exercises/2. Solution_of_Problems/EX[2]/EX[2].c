#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char alpha(char);
int main(void)
{char c;
scanf("%c",&c);
if(alpha(c))
	printf("Alphabetic");
else
	printf("Not Alphabetic");

}
char alpha(char c)
{ if(((c>='A' && c<='Z')||(c>='a' && c<='z')))
{
	return 1;
}
else
{
	return 0;
}
}
