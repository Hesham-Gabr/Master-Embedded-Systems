/*
 * lifo.c
 *
 *      Author: Hesham
 */

#include"lifo.h"


//APIs
LIFO_Status LIFO_init(LIFO_Buf_t* lifo_buf,element_type* buf,unsigned int length){
	//check lifo is valid
	if(buf == (element_type*)'\0' || lifo_buf == (LIFO_Buf_t*)'\0')
	{
		return LIFO_NULL;
	}
	lifo_buf->base = buf;
	lifo_buf->head  = buf;
	lifo_buf->length = length;
	lifo_buf->count = 0;
	return LIFO_no_error;
}
LIFO_Status LIFO_Add_item(LIFO_Buf_t* lifo_buf,element_type item){
	//check lifo is valid
	if(!lifo_buf->base || !lifo_buf->head)
	{
		return LIFO_NULL;
	}
	//check lifo is full
	if(lifo_buf->head >= lifo_buf->base+lifo_buf->length)
	{
		return LIFO_full;
	}
	//add item
	*(lifo_buf->head) = item;
	lifo_buf->head++;
	lifo_buf->count++;
	return LIFO_no_error;
}
LIFO_Status LIFO_Get_item(LIFO_Buf_t* lifo_buf,element_type* item){
	//check lifo is valid
	if(!lifo_buf->base || !lifo_buf->head)
	{
		return LIFO_NULL;
	}
	//check lifo is empty
	if(lifo_buf->count==0)
	{
		return LIFO_empty;
	}
	lifo_buf->head--;
	*item = *(lifo_buf->head);
	lifo_buf->count--;
	return LIFO_no_error;
}
LIFO_Status LIFO_Top(LIFO_Buf_t* lifo_buf,element_type *item)
{
	//check lifo is valid
	if(!lifo_buf->base || !lifo_buf->head)
	{
		return LIFO_NULL;
	}
	//check lifo is empty
	if(lifo_buf->count==0)
	{
		return LIFO_empty;
	}

	element_type* temp = lifo_buf->head - 1;
	*item = *(temp);
	return LIFO_no_error;
}
LIFO_Status LIFO_Empty(LIFO_Buf_t* lifo_buf)
{
	return !lifo_buf->base || !lifo_buf->head?LIFO_NULL:lifo_buf->count==0?LIFO_empty:LIFO_not_empty;
}

