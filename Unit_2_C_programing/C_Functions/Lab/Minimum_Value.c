/*
 * Minimum_Value.c
 *
 *  Created on: Dec 4, 2023
 *      Author: hesham
 * Calculate the Minimum Value 
 *  of any Given Array
 */
#include <stdio.h>

int MV(int arr[],int n);

int main()
{
	int x[8] ={4,5,6,7,15,18,30,-10};
	printf("%d",MV(x,8));
	return 0;
}

int MV(int arr[],int n)
{
	int i;
	int miniV = arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<miniV)
		{
			miniV=arr[i];
		}
	}
	return miniV;
}
