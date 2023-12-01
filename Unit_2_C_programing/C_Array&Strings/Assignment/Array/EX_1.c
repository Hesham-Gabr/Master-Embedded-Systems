/*
 * EX_1.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 * Sum of (2) matrix.
 */
#include<stdio.h>

void main()
{
	float A[2][2];
	float B[2][2];
	float Sum[2][2];
	int i,j;
	printf("Enter the element of the first matrix:\n");
	fflush(stdin);
	fflush(stdout);
	for(i=0; i<2; i++)
	{
		for(j=0 ; j<2; j++)
		{
			printf("Enter A[%d][%d]: ",i,j);
			scanf("%f",&A[i][j]);
		}
	}
	printf("Enter the element of the second matrix:\n");
	for(i=0; i<2; i++)
	{
		for(j=0 ; j<2; j++)
		{
			printf("Enter B[%d][%d]: ",i,j);
			scanf("%f",&B[i][j]);
		}
	}
	for(i=0; i<2; i++)
	{
		for(j=0 ; j<2; j++)
		{
			Sum[i][j] = A[i][j] + B[i][j];
		}
	}
	printf("Sum Of Matrix: ");
	for(i=0; i<2; i++)
	{
		for(j=0 ; j<2; j++)
		{
				printf("%.2f ",Sum[i][j]);
		}
			printf("\n");
	}
}
