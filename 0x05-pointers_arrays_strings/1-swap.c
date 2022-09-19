#include "main.h"

/**
 * swap_int - swap integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*b = x;
	*a = y;
}
