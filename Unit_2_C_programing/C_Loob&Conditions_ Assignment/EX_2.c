/*
 * EX_2.c
 *
 *  Created on: Nov 27, 2023
 *      Author: hesham
 */


#include <stdio.h>

void main()
{
	char c;
	printf("Enter an alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	if (((c>='a')&(c<='z')) || ((c>='A')&(c<='Z')))
	{
		switch (c)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		{
			printf("%c is vowel",c);
		}break;
		default :
		{
			printf("%c is constant.",c);
		}break;
		}
	}else printf("%c is not an alphabet",c);
}

