ENTRY(_reset)
MEMORY
{
	Mem(rwx):ORIGIN = 0x00000000,LENGTH = 64M
}
SECTIONS
{
	. = 0x10000;
	.startup . :
	{
	   Startup.o(.text)
	}> Mem
	.text :
	{
	   *(.text)
	}> Mem
	.data :
	{
	   *(.data)
	}> Mem
	.bss :
	{
	   *(.bss)
	}> Mem
	. = . + 0x1000;
	stack_top = . ;
}