#include <stdio.h>
/**
 * main - Entry pooint
 * Description: Program prints _putchar, followed by a new line.
 * Return: On success (0)
 */
int main(void)
{
	char c;

	for (c = "_putchar\n"; c != '\0'; ++c)
	{
		printf(c);
	}

	return (0);
}
