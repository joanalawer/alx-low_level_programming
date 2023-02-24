#include "main.h"
/**
 * print_triangle - Prints a triangle using #
 * @size: The size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = size, j = 0, n = size;

	if (i > 0)
	{
		while (i > 0)
		{
			j = 0;
			while (j < n - 1)
			{
				_putchar(' ');
				j++;
			}
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i--;
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
