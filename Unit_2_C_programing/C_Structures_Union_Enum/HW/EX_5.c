#include<stdio.h>
#include<math.h>

#define pi (22/(float)7)
#define circle_area(a) pi*a*a

int main()
{
	float r;
	printf("Enter the radius: ");
	scanf("%f",&r);
	printf("The area = %.3f",circle_area(r));
	return 0;
}