/*
 * testing.c
 *
 *  Created on: Oct 10, 2024
 *      Author: Hesham
 * Factorial Using Recursion
 * 
 */


#include <stdio.h>

int facto_rial(int n);

int main()
{
	int num;
	printf("Enter the number that you want to have its factorial: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	printf("%d",facto_rial(num));
	return 0;
}

int facto_rial(int n)
{
    static int fac=1;
	if (n>0)
	{
		fac *=n;
		n--;
		if (n)
		{
			facto_rial(n);
		}
	}
	else if (n==0)
	{
		fac = 1;
	}
	else
	{
		printf("Invalid Number! ");
		fac = '\0';
	}
	return fac;
}
