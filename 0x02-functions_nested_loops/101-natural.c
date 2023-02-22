#include <stdio.h>
/**
 * main - Entry point
 * Description: Program prints the natural numbers below 1024 
 * that are multiplies of 3 or 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			n += i;
	}

	printf("%d\n", n);

	return (0);
}
