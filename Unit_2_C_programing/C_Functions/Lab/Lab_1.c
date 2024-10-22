/*
 * Test.c
 *
 *  Created on: Dec 4, 2023
 *      Author: hesham
 */

#include<stdio.h>

int Factorial(int x);

int main()
{
	int n;
	printf("Enter the number that you want to have its factorial: ");
	scanf("%d",&n);
	printf("%d",Factorial(n));
	return 0;
}

int Factorial(int x)
{
	int f;
	for(f=1; x>0; x--)
	{
		f*=x;
	}
	return f;
}
