#include "main.h"
/**
 * print_square - Prints a square, followed by newline
 * size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	i = 0;

	if (size < 1)
		_putchar('\n');

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
