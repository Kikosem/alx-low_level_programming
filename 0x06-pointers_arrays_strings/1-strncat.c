#include "main.h"

/**
 * _strncat - concatenates two strings using said bytes
 * @dest: destination string for concatenate
 * @src: source string to concatenate on destination string
 * @n: number of bytes
 * Return: return concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';
	return (dest);
}
