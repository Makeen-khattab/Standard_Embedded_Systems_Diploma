

unsigned char RightCircularShift(unsigned int InputNumber, int NumberOfShifts,
unsigned int * pOutput) {

	if(NumberOfShifts>32)
	{
		*pOutput=InputNumber;
		return 0xFF;

	}
	else
	{
		*pOutput= ((InputNumber>>NumberOfShifts) | (InputNumber<<(32-NumberOfShifts)));
		return 0;

	}

}
