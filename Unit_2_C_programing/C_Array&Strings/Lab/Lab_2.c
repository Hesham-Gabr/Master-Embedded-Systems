/*
 * Lab_2.c
 *
 *  Created on: Nov 30, 2023
 *      Author: hesham
 *
 * Calculate Polynomial 
 * Value for a Set of Inputs
 */

#include "stdio.h"

void main()
{
	float X[5] = {5, 16, 22, 3.5, 15};
	float Y;
	int i;
	for (i=0; i<5; i++)
	{
		Y = 5*X[i]*X[i]+3*X[i]+2;
		printf("Y(%.2f) = %.2f\r\n",X[i],Y);
	}
}
