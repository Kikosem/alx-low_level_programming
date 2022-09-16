#include "main.h"

/**
  * _isupper - checks if the character is uppercase
  * @c: the character that is checked
  * Return: 0 if uppercase
  * 1 if otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
