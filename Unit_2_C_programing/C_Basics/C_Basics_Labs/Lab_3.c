/*
 * Lab_3.c
 *
 *  Created on: Feb 10, 2024
 *      Author: hesham
 * Calculate the Minimum
 * of Two Numbers
 */

#include <stdio.h>

int main()
{
	float x,y;
	printf("Enter Two Numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&x ,&y);
	printf("Minimum is %0.3f",(x < y)?x:y);
	return 0;
}
