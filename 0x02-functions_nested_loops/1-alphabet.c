#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase. followed by newline
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet--)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

	return (0);
}
