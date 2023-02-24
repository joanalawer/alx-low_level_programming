#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in terminal
 * @n: number of times \ is printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int linenum;
	int linelen;

	for (linenum = 0; linenum < n; ++linenum)
	{
		for (linelen = 0; linelen < linenum; ++linelen)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
