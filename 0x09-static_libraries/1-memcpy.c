#include "main.h"

/**
 * _memcpy - copies bytes from memory to another
 * @dest: destination
 * @src: source of bytes
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		j = i;

		dest[j] = src[i];
	}

	return (dest);
}
