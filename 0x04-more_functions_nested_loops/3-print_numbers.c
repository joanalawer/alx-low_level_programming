#include "main.h"
/**
 * print_numbers - Prints numbers from 0 t0 9, followed by newline.
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	
	_putchar('\n');
}
