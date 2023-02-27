#include "main.h"
/**
 * swap_int - swaps the value of values of two integers
 * @a: An integer with value to be swapped
 * @b: Another integer with value to be swapped
 * Return: void
 */
void swap_int(int *s, int *b)
{
	*s = b;
	*b = s;
}
