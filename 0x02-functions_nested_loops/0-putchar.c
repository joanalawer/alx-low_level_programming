#include "main.h"
/**
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int main(void)
{
	int i;
	char s[8] = "_putchar";
	
	while(i <= 8)
		_putchar("%c", s);
	
	_putchar('\n');

	return (0);
}
