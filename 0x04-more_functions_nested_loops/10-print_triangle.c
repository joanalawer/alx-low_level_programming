#include "main.h"
/**
 * print_triangle - Prints a triangle using #
 * @size: The size of the triangle
 * Return: void
 */
void print_triangle(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j <= i)
					_putchar(35);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
