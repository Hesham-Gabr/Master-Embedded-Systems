/*
 * EX_1.c
 *
 *  Created on: Dec 6, 2023
 *      Author: hesham
 */

#include<stdio.h>

int primNum(int number);

int main()
{
	int x, y, i;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &x, &y);
	while(x < 0 && y < 0)
	{
		printf("Enter Two intervals again");
		scanf("%d %d", &x, &y);
	}
	if (x > y)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}
	for(i=x+1; i<y; i++)
	{
		if (primNum(i) == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

int primNum(int number)
{
	int ch= 0,i;
	for (i=2; i<=number/2; i++)
		if (number%i == 0)
		{
			ch = 1;
			break;
		}
	return ch;
}
