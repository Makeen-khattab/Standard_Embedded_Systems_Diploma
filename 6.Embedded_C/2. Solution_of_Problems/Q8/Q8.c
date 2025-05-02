void ROR(unsigned char * varName_Ptr )
{

	*varName_Ptr= ((*varName_Ptr)>>4) | ((*varName_Ptr)<<4);

}

/* Code tarek w lazeez										*/
unsigned char reverseBits(unsigned char num)
{
    unsigned char  NO_OF_BITS = sizeof(num) * 8;
    unsigned char reverse_num = 0, i;

    /*
     * start looping from index 0 to n-1 and check every bit
     * if it is equals to one we need to set the reverse bit location value to one
     * if it is zero do no nothing as the reverse bit location equals to zero (reverse_num = 0 as initial value)
     */
    for (i = 0; i < NO_OF_BITS; i++)
    {
    	/* check if this bit is equals to one */
        if(num & (1 << i))
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i));
    }

    return reverse_num;
}
