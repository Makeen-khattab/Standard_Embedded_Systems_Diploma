#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char Check(int,int);
int main(void)
{int x,y;
scanf("%d %d",&x,&y);
	char F=Check(x,y);

	switch (F)
	{
	case 0 :
		printf("Equal");
		break;
	case 1 :
		printf("Multiple");
		break;
	case -1 :
		printf("Not Multiple");
		break;
	default:
	}
	return 0;
}
char Check(int x,int y)
{
	if(x%y==0)
	{
		if(x==y)
		return 0;
		return 1;
	}
	return -1;


}
