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

	while (dest[x] != 0)
	{
		i++;
	}

	j = 0;

	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = 0;
	
	return (dest);
}
