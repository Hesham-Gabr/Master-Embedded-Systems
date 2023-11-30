/*
 * Lab_6.c
 *
 *  Created on: Nov 30, 2023
 *      Author: hesham
 * Copy string to string_strcpy
 */

#include <stdio.h>
#include <string.h>

void main()
{
	char A[20] = {"Hesham"};
	char B[20];
	int i=0;
	/*strcpy(B,A);*/
	while(A[i] != 0)
	{
		B[i] = A[i];
		i++;
	}
	B[i]=0;
	printf("B[]=%s",B);

}
