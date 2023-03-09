#include "main.h"
/**
 * _strstr - function locates a string
 * @haystack: string to be checked
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = neddle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
