#include "holberton.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: the string
 * Return: the lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}