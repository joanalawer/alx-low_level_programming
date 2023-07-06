#include "main.h"

/**
 * print_binary - Function prints the binary equivalent of a decimal number.
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int dec_num, count = 0;

	for (dec_num = 63; dec_num >= 0; dec_num--)
	{
		num = n >> dec_num;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}
