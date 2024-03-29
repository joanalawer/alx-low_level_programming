#include "main.h"
/**
 * _pow_recursion - returns value of x to the power y
 * @x: integer number
 * @y: power value
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	/* int result = _pow_recursion(x * x); */

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
		y--;
	}
}
