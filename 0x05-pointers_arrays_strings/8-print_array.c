#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints a number of elements of an array of integers
 * @a: pointer to elements
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < 1; j++)
	{
		if (j == 0)
		{
			printf("%d ", a[j]);
		}
		else
		{
			printf(", %d," a[j]);
		}
	}
	printf('\n');
}
