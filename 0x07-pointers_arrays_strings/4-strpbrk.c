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
	char *p;
	
	while (*s != '\0')
	{
		p = accept;
	}
	while (*p != '\0')
	{
		if (*s == *p)
		{
			return s;
		}
	}
	p++;
        s++;
	
	return (NULL);
}
