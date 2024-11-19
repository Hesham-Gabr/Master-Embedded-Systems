#include <stdint.h>

extern uint32_t _stack_top;
extern int main(void);
void Reset_Handler(void);

void Default_Handler(void){
	Reset_Handler();
}
void NMI_Handler(void) __attribute__((weak,alias("Default_Handler")));
void HardFault_Handler(void) __attribute__((weak,alias("Default_Handler")));
void MMFault_Handler(void) __attribute__((weak,alias("Default_Handler")));
void BusFault_Handler(void) __attribute__((weak,alias("Default_Handler")));
void UsageFault_Handler(void) __attribute__((weak,alias("Default_Handler")));
uint32_t vectors[] __attribute__((section(".vectors"))) = {
	(uint32_t) &_stack_top,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &HardFault_Handler,
	(uint32_t) &MMFault_Handler,
	(uint32_t) &BusFault_Handler,
	(uint32_t) &UsageFault_Handler
};

extern uint32_t _E_text;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;


void Reset_Handler(void){
	//copy .data section from flash to sram
	uint32_t i;
	uint32_t Data_Size = (unsigned char*)& _E_data - (unsigned char*)&_S_data;
	char *src_ptr = (unsigned char*)&_E_text;
	char *dst_ptr = (unsigned char*)&_S_data;
	for(i=0;i<Data_Size;i++)
	{
		*((unsigned char*)dst_ptr++) = *((unsigned char*)src_ptr++);
	}
	//Zero to unitialized data area
	uint32_t Bss_Size = (unsigned char*)& _E_bss - (unsigned char*)&_S_bss;
	dst_ptr = (unsigned char*)&_S_bss;
	for(i=0;i<Bss_Size;i++)
	{
		*((unsigned char*)dst_ptr++) = (unsigned char)0;
	}
	//Jumb to main
	main();
}