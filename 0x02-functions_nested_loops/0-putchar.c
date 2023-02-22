#include <stdio.h>
/**
 * main - Entry pooint
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int main(void)
{
	char str[8] = "_putchar";

	while (str <= 8)
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');

	return (0);
}
