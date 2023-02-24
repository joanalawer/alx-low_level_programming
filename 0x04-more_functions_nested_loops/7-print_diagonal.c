#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in terminal
 * @n: number of times \ is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	j = 0;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
		_putchar('\n');
}
