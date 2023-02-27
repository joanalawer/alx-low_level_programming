#include "main.h"
/**
 * rev_string - Function reverses a string
 * @s: String to be reversed
 * Retuen: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char c;

	j = 0;
	c = s[0];

	while (s[j] != 0)
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		j--;
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
