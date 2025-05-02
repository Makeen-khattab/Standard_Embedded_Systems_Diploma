#include<stdio.h>
#include<stdlib.h>
void Max_Xoring(int,int);
int main(void)
{ int x,y;
scanf("%d %d",&x,&y);
Max_Xoring(x,y);
}
void Max_Xoring(int x,int y)
{ int i,j,Max=-1;
	if( (x<1) || (y>1000) || (x>y) )
	{
	printf("Invalid Input");
	}
	else
	{
	for ( j=x;j<=y;j++ )
	{
	 for( i=j;i<=y;i++)
	{
		 if((i^j)>Max)
	    {
		Max=i^j;
              	}
	}

	}
	}
printf("Max Xoring is Equal to %d",Max);

}
