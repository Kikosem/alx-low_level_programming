#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i = 0, j = 1, n = 50, m = 0, k;

	for (m = 0; m < n; m++)
	{
		k = i + j;
		i = j;
		j = k;

		if (n != 49)
			printf("%lu, ", k);
		else
			printf("%lu", k);
	}
	return (0);
}
