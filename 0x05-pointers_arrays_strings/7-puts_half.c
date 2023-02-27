#include "main.h"
/**
 * puts_half - Prints half of  a string
 * @str: String of which half will be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	j = 0;
	while (str[j] != 0)
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
