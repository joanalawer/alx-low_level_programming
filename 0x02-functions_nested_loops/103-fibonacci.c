#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the sum of the even-valued fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	long int sum;
	
	a = 1;
	b = 2;
	sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}

		b += a;
		a = b - a;
	}

	printf("%ld\n", sum);

	return (0);
}
