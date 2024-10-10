/*
 * EX_5.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesha
 */
#include<stdio.h>

void main()

{
	char x;
	printf("Enter a character : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	printf("Ascii code for %c is %d",x, x);
}


