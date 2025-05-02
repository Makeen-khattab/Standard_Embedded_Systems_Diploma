int Clearbit(int numb,int bitNum)
{

if(bitNum>=32)
{
	return numb;

}
else
	return (numb & (~(1<<bitNum)));

}

