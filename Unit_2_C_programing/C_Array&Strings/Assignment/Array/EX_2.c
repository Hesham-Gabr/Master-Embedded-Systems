/*
 * EX_2.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 */

#include <stdio.h>

void main()
{
	float X[100];
	int i, n;
	float sum = 0, Av;
	printf("Enter the number of data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);
	fflush(stdout);
	while(n>100 || n<0)
	{
		printf("Number should be in range of 1 to 100!\n");
		fflush(stdin);
		fflush(stdout);
		printf("Enter the number of data again: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&n);

	}
	for(i=0; i<n; i++)
	{
		printf("%d.Enter number: ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&X[i]);
		sum = sum + X[i];
	}
	Av = sum / n;
	printf("Average = %.2f",Av);
}
