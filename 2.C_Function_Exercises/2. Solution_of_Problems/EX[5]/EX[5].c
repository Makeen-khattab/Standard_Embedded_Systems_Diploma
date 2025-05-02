#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int EorO(int);
int main(void)
{int num;
scanf("%d",&num);
if(EorO(num))
{
printf("Odd");
}
else
	printf("Even");


}
int EorO(int num)
{if(num%2)
	return 1;
    return 0;
}
