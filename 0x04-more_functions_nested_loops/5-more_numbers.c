#include "main.h"
/**
 * more_numbers - Prints 20 times numbers 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; ++j)
	{
		for (i = 0; i < 15; ++i)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
