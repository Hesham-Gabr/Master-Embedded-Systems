//Calculate the summation of values between 1 & 99
#include <stdio.h>

void main()
{
    int i;
    int sum = 0;
    for (i=1;i<100;i++)
    {
        sum +=i;
    }
    printf("Summation of values between 1 & 99 is: %d",sum);
}