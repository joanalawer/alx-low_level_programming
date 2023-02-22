#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int i;

	a = 1;
	b = 2;

	while (b < 98 )
	{
		printf("%ld", a);

		if (i < 97)
		{
			b += a;
			a = b - a;
			printf(", ");
		}
		i++;
	}

	printf("\n");

	return (0);
}
