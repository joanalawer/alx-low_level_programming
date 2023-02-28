#include <stdio.h>
/**
 * main - Entry point
 * Description: generated random valid passwords
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	return (0);
}
