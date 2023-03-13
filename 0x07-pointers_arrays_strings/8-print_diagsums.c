#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: matrix of integers
 * @size: size of of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + i)];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d", sum1);
	printf("%d", sum2);
}
