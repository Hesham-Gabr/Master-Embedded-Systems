#include<stdio.h>

int main()
{
	int m;
	m = 29;
	int* ab;
	printf("Address of m : 0x%x\r\nvalue of m : %d\r\n\r\n",&m,m);
	ab = &m;
	printf("Now ab is assigned with address of m.\r\n");
	printf("The address that is stored in ab : 0x%x\r\nThe vaue that pointer ab point to : %d\r\n\r\n",ab, *ab);
	m = 34;
	printf("The value of m assigned to %d now.\r\n",m);
	printf("The address that is stored in ab : 0x%x\r\nThe vaue that pointer ab point to : %d\r\n\r\n",ab, *ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the value %d now\r\n",*ab);
	printf("Address of m : 0x%x\r\nvalue of m : %d\r\n",&m,m);
	return 0;
}