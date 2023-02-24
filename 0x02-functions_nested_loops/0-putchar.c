#include "main.h"
/**
 * main - Entry pooint
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	return (0);
}

