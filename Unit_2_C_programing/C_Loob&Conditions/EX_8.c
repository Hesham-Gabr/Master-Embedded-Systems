/*
 * EX_8.c
 *
 *  Created on: Nov 28, 2023
 *      Author: hesham
 */

#include <stdio.h>

void main()
{
	float x = 0.0, y = 0.0;
	char op;
	printf("Enter operator either + , - , * or / : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&op);
	if (op == '+' || op == '/' || op == '*' || op == '-')
	{
		printf("Enter two operands: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f",&x, &y);
		switch (op)
		{
		case '+':
		{
			printf("%f + %f = %.2f",x,y,x+y);
			break;
		}
		case '-':
		{
			printf("%f - %f = %.2f",x,y,x-y);
			break;
		}
		case '*':
		{
			printf("%f * %f = %.2f",x,y,x*y);
			break;
		}
		case '/':
		{
			printf("%f / %f = %.2f",x,y,x/y);
			break;
		}

		}
	}else{
		printf("%c is not an available operator.",op);
	}



}

