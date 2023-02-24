#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_x, fib1_y, fib2_x, fib2_y;
	unsigned long x, y;

	for (i = 0; i < 92; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_x = fib1 / 10000000000;
	fib2_x = fib2 / 10000000000;
	fib1_y = fib1 % 10000000000;
	fib2_y = fib2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		x = fib1_x + fib2_x;
		y = fib1_y + fib2_y;
		if (fib1_y + fib2_y > 9999999999)
		{
			x += 1;
			y %= 10000000000;
		}

		printf("%lu%lu", x, y);
		if (i != 98)
			printf(", ");

		fib1_x = fib2_x;
		fib1_y = fib2_y;
		fib2_x = x;
		fib2_y = y;
	}
	printf("\n");
	return (0);
}
