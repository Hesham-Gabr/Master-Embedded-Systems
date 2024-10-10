/*
 * EX_7.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesham
 */
#include <stdio.h>

void main()
{
	float x=0, y=0;
	printf("Enter Value of a : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&x);
	printf("Enter Value of b : ");
	scanf("%f",&y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("After swapping,Value of a = %.3f",x);
	printf("\nAfter swapping,Value of b = %.3f",y);
}

