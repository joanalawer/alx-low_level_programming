#include <stdio.h>
/**
 * main - Entry point
 * Description: Program prints alhpabet in lower case with exceptions
 * Return: Always 0  (Success)
 */
int main(void)
{
	char alphabt;

	for  (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e' && alphabt != 'q')
			putchar(alphabt);
	}
	putchar('\n');
	return (0);
}
