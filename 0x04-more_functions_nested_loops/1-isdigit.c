#include "holberton.h"

/**
 * _isdigit - checks wether its a digit
 * @c: the input variable
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
