#include "holberton.h"

/**
 * _strcmp - this compares strings
 * @s1: this the the first string
 * @s2: this is the second string
 * Return: 0 15 or -15
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (; *s1 == *s2; i++)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
