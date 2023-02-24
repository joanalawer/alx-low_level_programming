#include "main.h"
/**
* print_number - Function prints an integer
* @n: Integer to be printed
* Return: void
*/
void print_number(int n)
{
	int p, nb;

	p = 1;
	while (n / p >= 10 || n / p <= -10)
		p *= 10;

	while (p)
	{
		nb = n / p;
		if (nb < 0)
		{
			_putchar('-');
			_putchar('0' - nb);
			n = -(n - nb * p);
		}
		else
		{
			_putchar('0' + nb);
			n = n - nb * p;
		}
		p /= 10;
	}
}
