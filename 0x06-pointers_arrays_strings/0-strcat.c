#include "main_h"
/**
 * _strcat - concatenates two strings
 * @dest:destination string
 * @src: source string
 * Return: pointer ro reulting dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y = 0;
	int i;

	while (dest[x] != 0)
	{
		x++;
	}
	while (src[y] != 0)
	{
		y++;
	}

	for (i = 0; i <= x; i++)
	{
		dest[y] = src[i];
		y++;
	}

	return (dest);
}
