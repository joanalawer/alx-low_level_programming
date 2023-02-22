#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a;
	long int b;

	a = 1;
	b = 2;
	i = 0;

	printf("%ld, ", a);

	while (i < 98)
	{
		b += a;
		a = b - a;
		i++;
		printf("%ld", b);

		if (i < 97)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
