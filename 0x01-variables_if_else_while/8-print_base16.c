#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all no.s of base 16 in lowercase with putchar only
 * Return: Always (0)
 */
int main(void)
{
	int hexa;
	char lowercase;

	for (hexa = -; hexa <10; hexa++)
	{
		putchar((hexa % 10 + '0');
	}

	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);

	putchar('\n');

	return (0);
}
