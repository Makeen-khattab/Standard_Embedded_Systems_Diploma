#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int inch;
	int feet;

}Distance;
int main(void)
{
	Distance d1={5,4},d2={7,8},d3;
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	printf("Distance in feet %d ,Distance in feet %d",d3.feet,d3.inch);

}
