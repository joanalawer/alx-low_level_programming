#include <stdio.h>
/**
 * main - Entry pooint
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int main(void)
{
	char str[8] = "_putchar";

	for(i = 0; i <= 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
