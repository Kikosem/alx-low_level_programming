#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of square
 * @a: array
 * @size: size of the root of square
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[(size * i) + i];
		y += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", x, y);
}
