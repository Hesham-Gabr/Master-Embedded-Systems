#ifndef FIFO_H_
#define FIFO_H_

#include <stdint.h>
//user configurations
#define element_type	uint8_t

//FIFO data types
typedef struct{
	uint32_t length;
	uint32_t count;
	element_type *base;
	element_type *tail;
	element_type *head;
}FIFO_Buf_t;

typedef enum{
	FIFO_no_error,
	FIFO_NULL,
	FIFO_empty,
	FIFO_full,
}FIFO_BufStatus_t;

FIFO_BufStatus_t FIFO_init(FIFO_Buf_t* fifo_buf,element_type* buf,uint32_t length);
FIFO_BufStatus_t FIFO_enqueue(FIFO_Buf_t* fifo_buf,element_type item);
FIFO_BufStatus_t FIFO_dequeue(FIFO_Buf_t* fifo_buf,element_type *item);
FIFO_BufStatus_t FIFO_isFull(FIFO_Buf_t* fifo_buf);
void FIFO_print(FIFO_Buf_t* fifo_buf);

#endif /* FIFO_H_ */
