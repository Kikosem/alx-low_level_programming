#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i, j = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i / 3 == 0 || i / 5 == 0)
		{
			j = i + j;
		}
		else
		{
			continue;
		}

		printf("%d\n", j);
	}
	return (0);
}
