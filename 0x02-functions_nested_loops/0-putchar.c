#include <stdio.h>
#include "main.h"
/**
 * main - Entry pooint
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int _putchar(char c)
{
	char c;

	for (c = "_putchar\n"; c != '\0'; ++c)
	{
		_putchar(c);
	}

	return (0);
}
