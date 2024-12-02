/*
 * main.c
 *
 *      Author: Hesham
 */

#include<stdio.h>
#include<stdlib.h>
#include"lifo.h"

element_type buff_1[5];

int main()
{
	LIFO_Buf_t uart_lifo, I2C_lifo;
	unsigned int i;
	element_type item = 0;
	element_type* buff_2 = (element_type*)malloc(5*sizeof(int));
	//static allocation
	LIFO_init(&uart_lifo,buff_1,5);
	//dynamic allocation
	LIFO_init(&I2C_lifo,buff_2,5);
	printf("__STATIC ALLOCATION__\n");
	printf("\n");
	for(i=0;i<4;i++)
	{
		if(LIFO_Add_item(&uart_lifo,i)==LIFO_no_error)
		{
			printf("UART_LIFO add: %d\n",i);
		}
	}
	printf("\n");
	if(LIFO_Top(&uart_lifo,&item)==LIFO_no_error)
		printf("UART_LIFO top: %d\n",item);
	printf("\n");
	for(i=0;i<4;i++)
	{
		if(LIFO_Get_item(&uart_lifo,&item)==LIFO_no_error)
		{
			printf("UART_LIFO get: %d\n",item);
		}
	}
	if(LIFO_Empty(&uart_lifo)==LIFO_empty)
		printf("\nLIFO_Empty->TRUE\n");
	else if(LIFO_Empty(&uart_lifo)==LIFO_not_empty)
		printf("\nLIFO_Empty->FALSE\n");
	printf("\n");
	printf("__DYNAMIC ALLOCATION__\n");
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(LIFO_Add_item(&I2C_lifo,i)==LIFO_no_error)
		{
			printf("I2C_LIFO add: %d\n",i);
		}
	}
	printf("\n");
	if(LIFO_Top(&I2C_lifo,&item)==LIFO_no_error)
		printf("I2C_LIFO top: %d\n",item);
	if(LIFO_Empty(&I2C_lifo)==LIFO_empty)
		printf("\nLIFO_Empty->TRUE\n");
	else if(LIFO_Empty(&I2C_lifo)==LIFO_not_empty)
		printf("\nLIFO_Empty->FALSE\n");
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(LIFO_Get_item(&I2C_lifo,&item)==LIFO_no_error)
		{
			printf("I2C_LIFO get: %d\n",item);
		}
	}
	return 0;
}
