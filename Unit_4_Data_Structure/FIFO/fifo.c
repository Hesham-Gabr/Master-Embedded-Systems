#include<stdio.h>
#include"fifo.h"

FIFO_BufStatus_t FIFO_init(FIFO_Buf_t* fifo_buf,element_type* buf,uint32_t length){
	//check fifo is null
	if(!fifo_buf || !buf)
		return FIFO_NULL;
	fifo_buf->base = buf;
	fifo_buf->head = buf;
	fifo_buf->tail = buf;
	fifo_buf->length = length;
	fifo_buf->count = 0;
	return FIFO_no_error;
}
FIFO_BufStatus_t FIFO_enqueue(FIFO_Buf_t* fifo_buf,element_type item){
	//check fifo is null
	if(!fifo_buf->head || !fifo_buf->tail || !fifo_buf->base)
		return FIFO_NULL;
	//chck fifo if full
	else if(fifo_buf->count == fifo_buf->length)
		return FIFO_full;
	*(fifo_buf->head) = item;
	if(fifo_buf->head == fifo_buf->base + fifo_buf->length)
		fifo_buf->head = fifo_buf->base;
	else
		fifo_buf->head++;
	fifo_buf->count++;
	return FIFO_no_error;
}
FIFO_BufStatus_t FIFO_dequeue(FIFO_Buf_t* fifo_buf,element_type *item){
	//check fifo is null
	if(!fifo_buf->head || !fifo_buf->tail || !fifo_buf->base)
		return FIFO_NULL;
	//check fifo is empty
	if(fifo_buf->count==0)
		return FIFO_empty;
	*item = *(fifo_buf->tail);
	if(fifo_buf->tail==fifo_buf->base + fifo_buf->length)
		fifo_buf->tail = fifo_buf->base;
	else
		fifo_buf->tail++;
	fifo_buf->count--;
	return FIFO_no_error;
}
FIFO_BufStatus_t FIFO_isFull(FIFO_Buf_t* fifo_buf){
	//check fifo is null
	if(!fifo_buf->head || !fifo_buf->tail || !fifo_buf->base)
		return FIFO_NULL;
	//check fifo is empty
	if(fifo_buf->count==0)
		return FIFO_empty;
	else
		return FIFO_full;
}
void FIFO_print(FIFO_Buf_t* fifo_buf){
	element_type* temp;
	uint32_t i;
	//check fifo is null
	if(!fifo_buf->head || !fifo_buf->tail || !fifo_buf->base)
	{
		printf("FIFO Buffer has not been initialized yet!\n");
	}
	//check fifo is empty
	if(fifo_buf->count==0)
	{
		printf("FIFO is empty!\n");
	}
	else
	{
		temp = fifo_buf->tail;
		printf("---FIFO Print---\n");
		for(i=0;i<fifo_buf->count;i++)
		{
			printf("\t %X\n",*temp++);
		}
		printf("  ------------ \n");
	}
}
