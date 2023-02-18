#include <stdio.h>
/**
 * main - Entry point
 * Description: Program prints alhpabet in lower and upper case
 * Return: Always 0  (Success)
 */
int main(void)
{
	char alphABET;
	
	for  (alphABET = 'a'; alphABET <= 'z'; alphABET++)
	{
		putchar(alphABET);
	}
	for  (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
	{
		putchar(alphABET);
	}
	putchar('\n');
	return (0);
}
