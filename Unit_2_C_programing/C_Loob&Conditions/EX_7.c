/*
 * EX_7.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesham
 */

#include<stdio.h>

int main()
{
	int x = 0, fact = 1, i;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	if (x > 0)
	{
		for (i=x;i>0;i--)
		{
			fact = fact * i;
		}
		printf("factorial of %d = %d",x,fact);
	}
	else if (x == 0) printf("Factorial of 0 = 1");
	else printf("factorial of %d is not exist",x);
	return 0;
}

