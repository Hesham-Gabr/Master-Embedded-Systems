#include<stdio.h>

void main()
{
    float x[10];
    int i;
    for(i=0;i<=9;i++)
    {
        printf("Enter student %d degree:",i+1);
        scanf("%f",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("Student Number %d degree : %.2f \n",i+1,x[i]);
    }
}
