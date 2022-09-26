#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment
 * which consist only of bytes from accept
 * @s: string
 * @accept: chars to check for
 * Return: number of bytes in substrin
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (s[j] == '\0')
			return (k);
	}
	return (k);
}
