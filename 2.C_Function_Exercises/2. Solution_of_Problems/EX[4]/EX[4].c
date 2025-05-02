#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Calc(int,int,char);
int main(void)
{int num,result,num2;
char op;
scanf("%d %d %c",&num,&num2,&op);
result= Calc(num,num2,op);
printf("%d",result);

}
int Calc(int num,int num2,char op)
{
switch(op)
{
case '+':
	return num+num2;
case '-':
	return num-num2;
case '*':
	return num*num2;
case '/':
	return num/num2;
default:

}





}
