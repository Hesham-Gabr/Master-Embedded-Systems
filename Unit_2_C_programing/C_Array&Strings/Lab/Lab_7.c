/*
 * Lab_7.c
 *
 *  Created on: Nov 30, 2023
 *      Author: hesham
 * Adding String To String
 */

#include<stdio.h>
#include<string.h>

void main()
{
	char A[50]="Hesham";
	char B[]="Gabr";
	char C[50];
	strcat(A," ");
	strcat(A,"Amir ");
	strcat(A,B);
	printf("%s",A);
}
