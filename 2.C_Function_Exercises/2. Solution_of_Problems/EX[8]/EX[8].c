#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char Is_Prime(int);
int main(void)
{int x,y,i;
scanf(" %d %d",&x,&y);
for(i=x;i<=y;++i)
{
	if(Is_Prime(i))
	{
	printf("%d ",i);

	}
}
}
char Is_Prime(int i)
{ int j;
	if(i==0 || i==1)
{
	return 1;
}
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
			return 0;

		}
	}
	return 1;
}
