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

	for (i = 0; i < 98; i++)
	{
		printf("%ld", a);

		if (i < 97)
		{
			b += a;
			a = b - a;
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
