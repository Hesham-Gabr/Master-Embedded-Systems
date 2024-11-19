#include "Uart.h"
#define UART0_BASE		0x101F1000
#define UART0_DR		*((volatile unsigned int *)((unsigned int*)(UART0_BASE+0x0)))

void uart_send_str(unsigned char* P_tx_str){
	while(*P_tx_str != '\0')
	{
		UART0_DR = (*P_tx_str);
		P_tx_str++;
	}

}