#include<stdio.h>
#include<stdlib.h>
long long N_Term_Arithmetic(int,int,int);
int main()
{ int Beg,Seq,Index;
	long long Result;
	scanf("%d%d%d",&Beg,&Seq,&Index);
	Result=N_Term_Arithmetic(Beg,Seq,Index);
	printf("The n term is equal to %d",Result);
}
long long N_Term_Arithmetic(int Beg,int Seq,int Index)
{
	return Beg+Seq*Index;
}




