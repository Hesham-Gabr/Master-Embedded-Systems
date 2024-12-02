#include<stdio.h>
#include<stdint.h>
#include"fifo.h"

element_type uart_buffer[5];

int main()
{
	FIFO_Buf_t FIFO_UART;
	uint32_t i;
	element_type item;
	if(FIFO_init(&FIFO_UART,uart_buffer,5)==FIFO_no_error)
		printf("FIFO_init---done\n");
	else
		printf("FIFO_init---failed\n");
	for(i=0;i<7;i++)
	{
		if(FIFO_enqueue(&FIFO_UART,i)==FIFO_no_error)
			printf("\t FIFO_Enqueue (%X)---done\n",i);
		else
			printf("\t FIFO_Enqueue (%X)---failed\n",i);
	}
	FIFO_print(&FIFO_UART);
	FIFO_dequeue(&FIFO_UART,&item);
	FIFO_print(&FIFO_UART);
	for(i=0;i<15;i++)
	{
		if(FIFO_dequeue(&FIFO_UART,&item)==FIFO_no_error)
			printf("\t FIFO_dequeue---done & item = %X\n",item);
		else
			printf("FIFO_dequeue---failed\n");
	}
	FIFO_print(&FIFO_UART);
	return 0;
}

