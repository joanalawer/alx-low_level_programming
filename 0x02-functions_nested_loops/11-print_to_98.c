#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: first number passed to function to be printed
 * Return: Always 0 (Success)
 */
int print_to_98(int n)
{
	for(i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(", ");
	}
	_putchar('\n');

	return (0);
}
