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
	int n;

	n = 0;
	
	for (i = 0; str[i] != 0; i++)
	{
		n++;
	}
	
	j = (n / 2);

	if ((n % 2) == 1)
	{
		j = ((n + 1) / 2);
	}
	for (i = j; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
