#include "main.h"
/**
 * is_palindrome - returns value for palindrome
 * @s: string to check
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (check_str(s, 0, _strlen_recursion(s) - 1));
}

/* Adapting _strlen_recursion function*/

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}

/**
 * check_str - checks charaters in string
 * @s: string to check
 * @i: least char
 * @j: largest char
 * Return: 0
 */
int check_str(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + check(s, i + 1, j - 1));
	}
	return (0);
}
