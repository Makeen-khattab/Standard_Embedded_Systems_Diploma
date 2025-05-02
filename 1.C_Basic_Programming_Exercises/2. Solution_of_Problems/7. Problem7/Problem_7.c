#include<stdio.h>
#include<stdlib.h>
int main(void){
int x,y,z,min;
scanf("%d%d%d",&x,&y,&z);
min=x;
if(y<min)
	min=y;
if(z<min)
	min=z;
printf("The Minimum Number is %d",min);
}


