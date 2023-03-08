#include "main.h"
/**
 * _memset: functions fills memory with a constant byte
 * @s - pointer to the block of memory to fill
 * @b - value to be set
 * @n - number of bytes to be set to the value
 * Return - pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	char *ptr = s;
	for (i = 0; i < n; i++)
	{
		*ptr++ = b;
	}

	return (s);
}
