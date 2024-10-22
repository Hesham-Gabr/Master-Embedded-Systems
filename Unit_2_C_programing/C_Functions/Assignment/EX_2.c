/*
 * EX_2.c
 *
 *  Created on: Dec 7, 2023
 *      Author: hesham
 */

#include<stdio.h>

int factor_ial(int a);

int main()
{
	int x,c;
	printf("Enter a Positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	while(x<0)
	{
		printf("Enter a positive integer: ");
		scanf("%d",&x);
	}
	c = factor_ial(x);
	printf("%d",c);
	return 0;
}

int factor_ial(int a)
{
	if (a == 0) a++;
	static int fac = 1;
	fac = fac * a;
	a--;
	if(a>0)
	{
		factor_ial(a);
	}
	return fac;
}
