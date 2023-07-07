#include <stdio.h>
#include "main.h"

/**
 * set_bit - Function sets the value of a bit to 1 at a given index.
 * @n: Pointer to n.
 * @index: The index, starting from 0 of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
	{
		return (-1);
	}

	num = 1 << index;
	*n = (*n | num);

	return (1);
}
