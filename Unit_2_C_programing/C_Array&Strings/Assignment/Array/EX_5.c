/*
 * EX_5.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 */

#include <stdio.h>

void main()
{
	int X[30];
	int i, n, elem;
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
	printf("Enter the element to be searched: ");
	scanf("%d",&elem);
	for (i=0; i<n; i++)
	{
		if (X[i] == elem) break;
	}
	if (i<n)
	{
		printf("Number was found at Location %d",i+1);
	}else printf("Number %d not  exist. ",elem);

}
