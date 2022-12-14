#include "main.h"

/**
 * print_number - function prints an integer
 * @n: integer
 */

void print_number(int n)
{
	int adjustor, sign;

	adjustor = 1000000000;
	sign = 1;
	if (n > 0)
	{
		n = n * -1;
		sign = sign * -1;
	}
	if (n != 0)
	{
		while (n / adjustor == 0)
			adjustor = adjustor / 10;
		if (sign == 1)
			_putchar('-');
		while (adjustor >= 1)
		{
			_putchar(-(n / adjustor) + '0');
			n = n % adjustor;
			adjustor = adjustor / 10;
		}
	}
	else
		_putchar('0');
}
