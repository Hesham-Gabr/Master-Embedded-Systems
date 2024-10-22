/*
 * EX_4.c
 *
 *  Created on: Dec 8, 2023
 *      Author: hesham
 */

#include <stdio.h>

int main()
{
	float num;
	int po;
	printf("Enter base number: ");
	scanf("%d",&num);
	printf("Enter Power number (Positive integer): ");
	scanf("%d",&po);
	while (po<0)
	{
		printf("Enter Power number (Positive integer): ");
		scanf("%d",&po);
	}
	pow_num(num,po);
	return 0;
}

float pow_num(float x, int y)
{
	float
}
