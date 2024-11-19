#include "Uart.h"

char str_buffer[100] = "learn-in-depth:Hesham";
void main(void){
	uart_send_str(str_buffer);
}