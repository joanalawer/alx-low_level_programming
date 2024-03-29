#include <stdio.h>
#include "main.h"

/**
 * get_bit - Function returns the value of a bit at a given index.
 * @n: Value of a bit
 * @index: The index, starting from 0 of the bit
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}
	
	return (get_bit(n >> 1, index - 1));
}
