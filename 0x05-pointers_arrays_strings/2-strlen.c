#include "main.h"
/**
 * int _strlen - returns length of a string
 * @s: String to be counted
 * Return: 
 */
int _strlen(char *s)
{
	char s;
	int i;

	i = 0;

	for (s = 0; *s != '\0'; ++s)
	{
		i++;
	}

	return (i);
}

