#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random number
 * if statements check number
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = 0;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
