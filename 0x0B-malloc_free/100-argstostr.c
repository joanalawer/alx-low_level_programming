#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function concatenates all the arguments of your program.
 * @ac: args count
 * @av: arguments
 * Return: pointer to string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, n, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len += j + 1;
		}
	}

	str = malloc(len + 1);
	if (str == 0)
	{
		return (NULL);
	}

	n = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; k++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	return (str);
}
