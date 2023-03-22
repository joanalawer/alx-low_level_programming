#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number to calculate factorial
 * Return: 0
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
