#include "main.h"
/**
 * leet - replaces letters with numbers
 * @s: string of letters
 * Return: pointer to replaced letters
 */
char *leet(char *s)
{
	int i, j;

	char letters[80] = "aAeEoOtTlL";
	char numbers[80] = "43071";

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j / 2];
			}
		}
	}
	return (s);
}
