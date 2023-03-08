#include "main.h"
/**
 * _strchr - function locates a character in a string
 * @s: String from which character is located
 * @c: character to be located
 * Return: a pointer character c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
