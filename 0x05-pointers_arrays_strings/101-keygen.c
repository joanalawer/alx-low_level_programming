#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: generated random valid passwords
 * Return: Always 0
 */
int main(void)
{
	char pwd[84];
	int i = 0, sum = 0;
	int diff_x, diff_y;

	srand(time(0));

	while (sum < 2772)
	{
		pwd[i] = 33 + rand() % 94;
		sum += pwd[i++];
	}

	pwd[i] = '\0';

	if (sum != 2772)
	{
		diff_x = (sum - 2772) / 2;
		diff_y = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_x++;

		for (i = 0; pwd[i]; i++)
		{
			if (pwd[i] >= (33 + diff_x))
			{
				pwd[i] -= diff_x;
				break;
			}
		}
		for (i = 0; pwd[i]; i++)
		{
			if (pwd[i] >= (33 + diff_y))
			{
				pwd[i] -= diff_y;
				break;
			}
		}
	}

	printf("%s", pwd);

	return (0);
}
