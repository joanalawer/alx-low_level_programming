#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible combinations of single-digit numbers.
 * Return: Always (0) Success
 */
int main(void)
{
	int x, y;

	for (x = 0; i < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			
			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
