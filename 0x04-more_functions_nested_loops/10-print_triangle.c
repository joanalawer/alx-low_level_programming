#include "main.h"
/**
 * print_triangle - Prints a triangle using #
 * @size: The size of the triangle
 * Return: void
 */
void print_triangle(int size);
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
			j--;
		}
		_putchar('\n');
		i--;
	}
}
