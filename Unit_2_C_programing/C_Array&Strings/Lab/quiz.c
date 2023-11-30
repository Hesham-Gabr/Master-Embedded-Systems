/*
 * quiz.c
 *
 *  Created on: Nov 30, 2023
 *      Author: hesham
 */


#include <stdio.h>
#include <string.h>

void main()
{
	int x[1000];
	int i;
	for(i=0; i<1000; i++)
	{
		x[i] = rand();
	}
	printf("%d",x[50]);
}
