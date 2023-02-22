#include <stdio.h>
#include "main.h"
/**
 * main - Entry pooint
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int _putchar(char c)
{
	char i;

	for (i = "_putchar\n"; i != '\0'; ++i)
	{
		_putchar(i);
	}

	return (0);
}
