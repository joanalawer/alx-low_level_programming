#inlude "main.h"
/**
 * *infinite_add - adds two numbers
 * @n1: number to be added
 * @n2: number to be added
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: 0 (Success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int n1_len = 0;
	int n2_len = 0;

	for (i = 0; *(n1 + i); i++)
	{
		n1_len++;
	}

	for (i = 0; *(n2 + i); i++)
	{
		n2_len++;
	}

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
	{
		return (0);
	}

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
