/*
 * lifo.h
 *
 *      Author: Hesham
 */

#ifndef LIFO_H_
#define LIFO_H_
#include <stdint.h>

//user configurations
#define element_type uint8_t

//type definitions
typedef struct{
	unsigned int length;
	element_type* base;
	element_type* head;
	unsigned int count;
}LIFO_Buf_t;

typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_not_empty,
	LIFO_NULL
}LIFO_Status;

//APIs
LIFO_Status LIFO_init(LIFO_Buf_t* lifo_buf,element_type* buf,unsigned int length);
LIFO_Status LIFO_Add_item(LIFO_Buf_t* lifo_buf,element_type item);
LIFO_Status LIFO_Get_item(LIFO_Buf_t* lifo_buf,element_type* item);
LIFO_Status LIFO_Top(LIFO_Buf_t* lifo_buf,element_type *item);
LIFO_Status LIFO_Empty(LIFO_Buf_t* lifo_buf);
#endif /* LIFO_H_ */
