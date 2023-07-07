#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Function eturns the number of bits you would need
 * to flip to get from one number to another
 * @n: Number to flip from
 * @m: Number to flip to
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			num_bits++;
		}
	}

	return (num_bits);
}
