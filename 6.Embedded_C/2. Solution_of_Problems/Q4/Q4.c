/*
 * Q4.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Dell
 */

#include"Q4.h"
char FallingEdgCounter(int Value)
{
	static int Prev,edges;


	if(Prev == HIGH && Value == LOW)
	{

		edges++;

	}
	Prev=Value;

	return edges;
}
