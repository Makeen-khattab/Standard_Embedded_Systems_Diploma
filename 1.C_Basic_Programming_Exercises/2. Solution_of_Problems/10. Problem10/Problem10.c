#include<stdio.h>
#include<stdlib.h>
int main(void)
{ int x,y;
char op;
scanf("%c",&op);
scanf("%d%d",&x,&y);
switch (op)
{
case '+':
	printf("The Addition of the two numbers is Equal %d",x+y);
break;
case '*':
	printf("The Multiplication of the two numbers is Equal %d",x*y);
break;
case '/':
printf("The Division of the two numbers is Equal %d",x/y);
break;
default:
	printf("invalid Operation");
}
}

