/*
 * Lab_4
 *
 *  Created on: Nov 30, 2023
 *      Author: hesham
 */

#include "stdio.h"

void main()
{
	/*char X[30];*/
	char Y[30];
	/*printf("Enter Your Name : ");
	*scanf("%s",X);
	*printf("%s\n",X);*/
	printf("Enter Your Name : ");
	fflush(stdin);
	fflush(stdout);
	gets(Y);
	printf("%s",Y);
}
