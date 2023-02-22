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
	i = 2;

	printf("%ld, %ld, ", a, b);

	while (i < 98)
	{
		long int temp = b;

		b += a;
		a = temp;
		i++;
		printf("%ld", b);

		if (i < 98)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
