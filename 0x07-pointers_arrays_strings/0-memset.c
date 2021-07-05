#include "holberton.h"

/**
 * _memset - fills n bytes of the memory area in s
 * @s: the filled area
 * @b: the constant
 * @n: the number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
