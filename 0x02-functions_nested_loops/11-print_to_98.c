#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Input number
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar("%d\n", n);
	}
	else
	{
		_putchar("%d, ", n);
		print_to_98((n < 98) ? n + 1 : n - 1);
	}
}
