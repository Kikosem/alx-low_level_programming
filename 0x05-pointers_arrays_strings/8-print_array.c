#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: pointer of array
 * @n: number of times to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		void print_array(int *a, int n);void print_array(int *a, int n);
		if (i != n - 1)
			printf(", ");
	}
	printf('\n');
}
