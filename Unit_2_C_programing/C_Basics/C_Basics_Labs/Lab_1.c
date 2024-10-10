/*In this program the user has to choose between calculating circle area or circle
circumference. The choice comes by taking a character from the keyboard using the (getche)
function. If the user presses „a‟ character it proceeds with area calculation and printing. If the
user presses „c‟ character it proceeds with circumference calculation and printing. If the user
presses other letters the program prints an error message*/

#include <stdio.h>

void main(void)
{
	float x;
	char ch;
	printf("Enter circle radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	if (x >0)
	{
		printf("Enter your choise (a or A to calculate area c or C to calculate circumference): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&ch);
		if (ch == 'A' || ch == 'a')
		{
			printf("Area = %0.2f",3.14*x*x);
		}
		else if(ch == 'C' || ch == 'c')
		{
			printf("Circumference = %0.2f",2*3.14*x);
		}
		else
		{
			printf("Wrong choice!");
		}
	}
	else
	{
		printf("r is negative!");
	}

}
