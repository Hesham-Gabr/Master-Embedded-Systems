/*
 * Lab_5.c
 *
 *  Created on: Nov 30, 2023
 *      Author: hesham
 * printing Array of Strings
 */

#include<stdio.h>
 void main()
 {
	 char Table[5][20] = {"Ahmed","Hesham","Ali","Hossam","Khaled"};
	 int i;
	 for(i=0; i<5;i++)
	 {
		 printf("%s\r\n",Table[i]);
	 }
 }
