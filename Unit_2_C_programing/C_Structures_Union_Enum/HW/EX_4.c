/*
 * lesson_6.c
 *
 *  Created on: Oct 21, 2024
 *      Author: Hesham
 *  
 *   
 */

#include<stdio.h>
#include<string.h>
#include<conio.h>

struct SStudent
{
    char name[50];
	int roll;
	int marks;
};

struct SStudent readstudent();
void printdata(struct SStudent y);
void clearInputBuffer();

int main()
{
    int i,j;
    struct SStudent x[10];
    for(i=0;i<10;i++)
    {
        printf("\r\n");
        x[i] = readstudent();
        printf("Enter y if you want to add more: ");
        char ch = getche();
        if (ch!='y' && ch !='Y')
        {
            break;
        }
    }
        for(j=0;j<=i&&i!=100;j++)
    {
        printdata(x[j]);
    }
    
    return 0;
}

struct SStudent readstudent(void)
{
    struct SStudent st;
    printf("Enter student name: ");
    fgets(st.name,50,stdin);
    printf("Enter student Roll Number: ");
    scanf("%d",&st.roll);
    printf("Enter student marks: ");
    scanf("%d",&st.marks);
    clearInputBuffer();
    return st;
}

void printdata(struct SStudent y)
{
    printf("\r\nDisplaying information\r\nname: %sroll: %d\r\nmarks: %d",y.name,y.roll,y.marks);
}

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}