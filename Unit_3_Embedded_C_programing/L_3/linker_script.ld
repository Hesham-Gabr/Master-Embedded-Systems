/*Hesham Amir*/

MEMORY
{
	flash(rx) : ORIGIN = 0x08000000, LENGTH = 128K	/*flash memory*/
	sram(rwx) : ORIGIN = 0x20000000, LENGTH = 20K 	/*SRAM*/
}
SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata*)
		. = ALIGN(4) ;
		_E_text = . ;
	}>flash
	.data : {
		_S_data = . ;
		*(.data*)
		. = ALIGN(4) ; 
		_E_data = . ;
	}>sram AT>flash
	.bss : {
		_S_bss = . ;
		*(.bss*)
		*(.COMMON)
		_E_bss = . ;
	}>sram
	. = . + 0x1000 ;
	_stack_top = . ;
}