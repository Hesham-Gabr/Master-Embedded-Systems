/*
 * EX_6.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesham
 */

#include <stdio.h>

void main()
{
	int y = 0, sum = 0, x;
	printf("Enter an integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&y);
	for (x = 1;x<=y;x++) sum +=x;
	printf("%d",sum);




}


