#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to string
 * Return: 0
 */
void _print_rev__recursion(char *s)
{
        if (*s == '\0')
        {
                _putchar('\n');
        }
        else
        {
                _puts_recursion(++s);
		_putchar(*s);
        }
}
