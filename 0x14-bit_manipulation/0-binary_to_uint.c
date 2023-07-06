#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b:  Pointer to a string of '0' and '1' characters representing binary num.
 * Return: The converted unsigned int value, or 0 if there is an invalid
 * character or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_val = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		conv_val = 2 * conv_val + (b[i] - '0');
	}

	return (conv_val);
}
