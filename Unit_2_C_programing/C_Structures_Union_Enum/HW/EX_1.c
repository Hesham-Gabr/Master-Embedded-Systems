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

int main()
{
    struct SStudent x;
    x = readstudent();
    printdata(x);
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
    return st;
}

void printdata(struct SStudent y)
{
    printf("\r\nDisplaying information\r\nname: %sroll: %d\r\nmarks: %d",y.name,y.roll,y.marks);
}