/*
 * Lab_2.c
 *
 *  Created on: Feb 10, 2024
 *      Author: hesham
 * This program finds the largest value of the three given values.
 */

#include <stdio.h>

int main()
{
	float x ,y ,z;
	x=y=z=0;
	printf("Enter three values: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&x ,&y ,&z);
	if (x > y)
	{
		if (x>z)
		{
			printf("%0.2f is the largest",x);
		}
		else
		{
			printf("%0.2f is the largest",z);
		}
	}
	else{
		if (y>z){
			printf("%0.2f is the largest",y);
		}
		else{
			printf("%0.2f is the largest",z);
		}
	}

	return 0;
}

