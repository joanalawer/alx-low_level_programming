#include "main_h"
/**
 * _strcat - concatenates two strings
 * @dest:destination string
 * @src: source string
 * Return: pointer ro reulting dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;
	int i;

	len1 = 0;
	len2 = 0;

	while (src[x] != 0)
	{
		x++;
	}
	while (dest[y] != 0)
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
