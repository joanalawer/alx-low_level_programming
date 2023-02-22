#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase. followed by newline
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet--)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
