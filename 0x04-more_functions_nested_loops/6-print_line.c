#include "main.h"

/**
 * print_line - prints underscore characters
 * @n: number of underscore
 * Return: returns 0 or 1
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
