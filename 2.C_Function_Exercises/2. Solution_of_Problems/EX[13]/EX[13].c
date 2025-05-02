#include<stdio.h>
#include<stdlib.h>

float Floor_Addition(float,float);
int main(void)
{float x,y;
scanf("%f %f",&x,&y);
printf("Floor_Addition is Equal to %f",Floor_Addition(x,y));
}
float Floor_Addition(float x,float y)
{float z,t;
z=x+y;
t=z-(int)z;
z=z-t;
return z;
}
