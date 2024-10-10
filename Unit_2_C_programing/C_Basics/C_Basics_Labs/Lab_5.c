//Calculating the average of Students Degrees

#include <stdio.h>

void main()
{
    int No_of_Stu,i;
    float deg , sumofdeg=0;
    float avg;
    printf("Enter the Number of Students: ");
    scanf("%d",&No_of_Stu);
    for(i=0;i<No_of_Stu;i++)
    {
        printf("Enter student (%d) Degree: ",i+1);
        scanf("%f",&deg);
        sumofdeg +=deg;
    }
    avg = sumofdeg/No_of_Stu;
    printf("The average of students degrees = %0.2f",avg);
}