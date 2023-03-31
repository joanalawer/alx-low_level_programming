#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0. Otherwise, the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i, sum = 0;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num_list, int);

	va_end(num_list);

	return (sum);
}
