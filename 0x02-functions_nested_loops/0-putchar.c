#include "main.h"
/**
 * main - Entry pooint
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int main(void)
{
	int _putchar[8] = "_putchar";
	int i;

	while (i < 8)
		_putchar(i);
	
	i++;
	_putchar('\n');

	return (0);
}
