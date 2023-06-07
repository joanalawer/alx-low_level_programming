#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to compute
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int sqt = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if	(n == 1)
	{
		return (1);
	}
	else
	{
		return (sqrt_funx(n, sqt));
	}
}

/**
 * sqrt_funx - find square root of a number
 * @num: number to find square root
 * @sqt: square root
 * Return: 0
 */
int sqrt_funx(int num, int sqt)
{
	if ((sqt * sqt) == num)
	{
		return (sqt);
	}
	if (sqt == num / 2)
	{
		return (-1);
	}
	return (sqrt_funx(num, sqt + 1));
}
