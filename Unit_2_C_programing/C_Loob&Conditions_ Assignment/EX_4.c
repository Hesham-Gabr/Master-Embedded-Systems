/*
 * EX_4.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesham
 *
 */

#include <stdio.h>

void main()
{
	float x = 0;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	if (x > 0) printf("%.2f is Positive",x);
	else if (x == 0) printf("You entered Zero");
	else printf("%.2f is Negative",x);
}
