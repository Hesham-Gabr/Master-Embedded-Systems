/*
 * EX_1.c
 *
 *  Created on: Dec 1, 2023
 *      Author: hesham
 * Find frequency of character in string
 */


#include <stdio.h>
#include <string.h>

void main()
{
	char X[100];
	int i;
	int f = 0;
	char ch;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(X);
	printf("Enter a character to find frequency: ");
	scanf("%c",&ch);
    for (i=0; X[i]!=0 && i<100; i++)
	{
		if (X[i]== ch)
	    {
			f++;
	    }
	}

	printf("frequency of %c = %d",ch,f);
}
