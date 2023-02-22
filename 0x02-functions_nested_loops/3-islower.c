#include "main.h"
/**
  * _islower - Checks for lowercase character
  * @c - single letter input
  * Return: 1 if c is lowercase and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
