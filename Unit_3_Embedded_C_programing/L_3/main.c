/**
 ******************************************************************************
 *Hesham Amir
 ******************************************************************************
 */

#include <stdint.h>
#define RCC_BASE 	0x40021000
#define GPIOA_BASE 	0x40010800
#define RCC_APB2ENR	*((volatile uint32_t*)(RCC_BASE+0x18))
#define GPIO_CRH	*((volatile uint32_t*)(GPIOA_BASE+0x04))
#define GPIO_ODR	*((volatile uint32_t*)(GPIOA_BASE+0x0c))
#define RCC_IOPAEN	(1<<2)

typedef union{
	volatile uint32_t all_fields;
	struct{
		volatile uint32_t reserved:20;
		volatile uint32_t Mode_pin13:4;
	}SPin;
}SRCRH_t;
volatile SRCRH_t* R_CRH = (volatile SRCRH_t*)(GPIOA_BASE+0x04);
typedef union{
	volatile uint32_t all_fields;
	struct{
		volatile uint32_t reserved:13;
		volatile uint32_t P_13:1;
	}SPin;
}SRODR_t;
volatile SRODR_t* R_ODR = (volatile SRODR_t*)(GPIOA_BASE+0x0c);

//some variables for test
unsigned char g_variables[3] = {1,2,3};
unsigned char const const_variables[3] = {1,2,3};
unsigned char arr[5];

int main(void)
{
	uint32_t i;
	RCC_APB2ENR |= RCC_IOPAEN;
 	R_CRH->SPin.Mode_pin13 = 2;
	/* Loop forever */
	while(1)
	{
		R_ODR -> SPin.P_13 = 1;
		for(i=0;i<5000;i++);			//delay
		R_ODR -> SPin.P_13 = 0;			
		for(i=0;i<5000;i++);			//delay
	}
	return 0;
}
