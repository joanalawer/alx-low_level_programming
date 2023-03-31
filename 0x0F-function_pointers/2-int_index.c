#include "function_pointers.h"
/*
 * int_index - Function that searches for an integer
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
