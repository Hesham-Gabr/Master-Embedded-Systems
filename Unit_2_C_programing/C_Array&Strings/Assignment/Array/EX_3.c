/*
 * EX_3.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 * Find Matrix's Transpose
 */


#include <stdio.h>

void main()
{
	float matrix[20][20];
	float mat_t[20][20];
	int i,j,r,c;
	printf("Enter The Number Of Rows & Columns: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&r,&c);
	while((r < 0 || r > 20) && (c < 0 || c > 20))
	{
		printf("Enter The Number Of Rows & Columns Again(1-20): ");
		scanf("%d %d",&r,&c);
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter Item[%d][%d]: ",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix[i][j]);
		}
	}
	printf("Matrix: \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%.2f ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("Matrix's Transpose: \n");
	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			mat_t[i][j] = matrix[j][i];
			printf("%.2f ",mat_t[i][j]);

		}
		printf("\n");
	}


}
