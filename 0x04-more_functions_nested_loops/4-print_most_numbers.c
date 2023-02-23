#include "main.h"
/**
 * print_most_numbers - Prints 0 to 9, except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i != '2' && i != '4'; i++)
		_putchar(i);

	_putchar('\n');
}

