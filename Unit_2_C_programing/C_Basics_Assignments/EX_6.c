/*
 * EX_6.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesham
 */
#include <stdio.h>

void main()
{
	/*Swap Two Numbers without temp variable.*/
	float x = 0, y = 0, temp = 0;
	printf("Enter Value of a : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter Value of b : ");
	scanf("%f",&y);
	temp = x;
	x = y;
	y = temp;
	printf("After swapping,Value of a = %.3f",x);
	printf("\nAfter swapping,Value of b = %.3f",y);



}
