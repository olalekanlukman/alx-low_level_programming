#include "holberton.h"

/**
 * _isupper - this returns 1 or 0 if it uppercase
 * @c: this collects the input
 * Return: returns 0 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
