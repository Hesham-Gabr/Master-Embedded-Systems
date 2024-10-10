/*
 * EX_3.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesha
 */
#include <stdio.h>

void main()
{
	float x = 0, y = 0, z = 0;
	printf("Enter three numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if (x>y)
	{
		if (x>z) printf("Largest Number = %.2f",x);
		else printf("largest Number = %.2f",z);
	}else{
		if (y>z) printf("Large Number = %.2f",y);
		else printf("Largest Number = %.2f",z);
	}
}


