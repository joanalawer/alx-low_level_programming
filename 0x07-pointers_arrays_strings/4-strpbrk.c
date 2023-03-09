#include "main.h"
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: pointer to string s
 * @accept: pointer to string accept
 * Return: pointer to the byte s that matches one of the bytes in accept.
 * else NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}

	return (0);
}
