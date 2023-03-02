#include "main_h"
/**
 * _strcat - concatenates two strings
 * @dest:destination string
 * @src: source string
 * Return: pointer ro reulting dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dst[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = 0;

	return (dest);
}
