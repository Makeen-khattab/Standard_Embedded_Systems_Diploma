#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int Real_Part;
	int Complex_Part;

}Imaginary;
int main(void)
{
	Imaginary d1={5,4},d2={7,8},d3;
	d3.Complex_Part=d1.Complex_Part+d2.Complex_Part;
	d3.Real_Part=d1.Real_Part+d2.Real_Part;
	printf("Imaginary in Complex_Part %d i ,Imaginary in Real_Part %d",d3.Complex_Part,d3.Real_Part);

}
