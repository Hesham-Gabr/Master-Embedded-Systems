/*
 * Lab_3.c
 *
 *  Created on: Nov 30, 2023
 *      Author: hesham
 */


#include <stdio.h>

void main()
{
	float matrix[3][4];
	float mat_t[4][3];
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Enter Item[%d][%d]: ",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%.2f ",matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			mat_t[i][j] = matrix[j][i];
			printf("%.2f ",mat_t[i][j]);

		}
		printf("\n");
	}


}
