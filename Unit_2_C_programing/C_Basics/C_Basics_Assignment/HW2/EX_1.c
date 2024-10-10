/*
 * EX_1.C
 *
 *  Created on: Nov 27, 2023
 *      Author: hesham
 */

#include <stdio.h>

void main()
{
	int x = 0;
	printf("Enter an integer you want to check : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	if (x%2==0)
	{
		printf("%d is even",x);
	}else{
		printf("%d is odd",x);
	}

}


