#include "main.h"
/**
 * _pow_recursion - returns value of x to the power y
 * @x: integer number
 * @y: power value
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (1 / (_pow_recursion(x * x)));
		y = y + 1;
	}
	else
	{
		return (_pow_recursion(x * x));
		y--;
	}
}
