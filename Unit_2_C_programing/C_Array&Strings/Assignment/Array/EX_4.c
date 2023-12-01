/*
 * EX_4.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 */

#include <stdio.h>

void main()
{
	int X[30];
	int i, n, L, elem;
	printf("Enter Number of Elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	while (n<0 || n>30)
	{
		printf("Enter Number of Elements Again: ");
		scanf("%d",&n);
	}
	printf("Enter Elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&X[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d",&elem);
	printf("Enter the location: ");
	scanf("%d",&L);
	for (i=n; i>=L;i--)
	{
		X[i]=X[i-1];
	}
	n++;
	X[L-1]=elem;
	for (i=0; i<n; i++)
	{
		printf("%d",X[i]);
	}


}
