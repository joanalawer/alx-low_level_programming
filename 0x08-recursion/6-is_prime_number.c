#include "main.h"
/**
 * is_prime_number - check if number is prime number
 * @n: number to check
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (prime_check(n, x));
}

/**
 * prime_check - check if num is divisible by only 1 and itself
 * @num: number to check
 * @x: number dividing
 * Return: 0
 */
int prime_check(int num, int x)
{
	if (num % div == 0)
	{
		return (0);
	}
	else if (x == num / 2)
	{
		return (1);
	}

	return (prime_check(num, x + 1));
}
