/*
 * Q5.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Dell
 */
#include"Q5.h"
char RisingEdgCounter(int Value)
{
	static int Prev,edges;


	if(Prev == LOW && Value == HIGH)
	{

		edges++;

	}
	Prev=Value;

	return edges;
}

