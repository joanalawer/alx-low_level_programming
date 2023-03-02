#include "main.h"
/**
 * string_toupper - Changes all lowercase lettrs of string to uppercase
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	s[i] = '\0';

	return (s);
}
