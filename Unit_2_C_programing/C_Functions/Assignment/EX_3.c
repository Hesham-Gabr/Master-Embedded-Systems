/*
 * EX_3.c
 *
 *  Created on: Dec 7, 2023
 *      Author: hesham
 */
#include<stdio.h>

void rev_sentence(void);

int main()
{
	printf("Enter a sentence: ");
	fflush(stdin);
	fflush(stdout);
	rev_sentence();
	return 0;
}

void rev_sentence(void)
{
	char ch;
	scanf("%c",&ch);
	if (ch !='\n')
	{
		rev_sentence();
		printf("%c",ch);
	}
}
