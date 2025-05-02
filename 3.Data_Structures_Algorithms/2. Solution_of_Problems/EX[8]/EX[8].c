#include<stdio.h>
#include<stdlib.h>
#include "math.h"
long long N_Term_Geom(int,int,int);
int main()
{ int Beg,Seq,Index;
	long long Result;
	scanf("%d%d%d",&Beg,&Seq,&Index);
	Result= N_Term_Geom(Beg,Seq,Index);
	printf("The n term is equal to %lld",Result);
}
long long N_Term_Geom(int Beg,int Seq,int Index)
{
	return Beg*pow(Seq,Index);
}



