#include <stdio.h>
/**
 * main - Entry point
 * Description: Program finds and prints the largest prime factor
 * of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	unsigned long factor = 2;
	unsigned long num = 612852475143;

	while (num != 1)
	{
		if (num % factor == 0)
			num /= factor;
		else
			factor++;
	}
	printf("%lu\n", factor);
	return (0);
}
