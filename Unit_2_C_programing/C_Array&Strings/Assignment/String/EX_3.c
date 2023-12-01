/*
 * EX_3.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 * Reverse String Without using Lib Func
 */


#include <stdio.h>
#include <string.h>

void main()
{
	char x[100];
	char y[100];
	int i,n;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(x);
	n = strlen(x);
	for(i=0; i<strlen(x); i++)
	{
		y[n-1]=x[i];
		n--;
	}
	y[strlen(x)]=0;
	printf("%s",y);


}
