#include<stdio.h>
#include<stdlib.h>
#define  UNSH unsigned short int
char Max_Num_Of_Cons_Ones(UNSH);
int main()
{
char Check;
UNSH x;
	scanf("%hu",&x);
fflush(stdout);
Check=Max_Num_Of_Cons_Ones(x);
if(!Check)
{
	printf("This Number is Zero it Does not Contain any zero ");
}
else
{
printf("The maximum Number of Consecutive ones is Equal to %d",Check);
}
}
char Max_Num_Of_Cons_Ones(UNSH x)
{char Max_Ones=-1,Temp_Max_Ones=0;

	UNSH Mask=0x8000;
	for(int i =0;i<16;++i)
	{
		if(( Mask>>i)& x )
		{Temp_Max_Ones++;
        	}
		else
			Temp_Max_Ones=0;

		if(Temp_Max_Ones>Max_Ones)
			Max_Ones=Temp_Max_Ones;

	}

return Max_Ones;
}
