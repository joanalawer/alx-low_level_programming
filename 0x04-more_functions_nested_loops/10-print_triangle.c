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
	int x;

	i = size - 1;
	x = 0;

	while (x < size)
	{
		i = size - 1 - x;
		j = x + 1;
		while (i < 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0);
		{
			_putchar('#');
			j--;
		}
	
		_putchar('\n');
		x++;
	}
	if (size <=0)
	{
		_putchar('\n');
	}
}
