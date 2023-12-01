/*
 * EX_2.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 * Length of string
 */


#include <stdio.h>

void main()
{
	char x[100];
	int i;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(x);
	for (i=0; (x[i] != 0) && (i<100); i++)
	{
	}
	printf("Length of String = %d",i);

}
