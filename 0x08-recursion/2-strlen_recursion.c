#include "holberton.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: the string
 * Return: the lenght
 */

int _strlen_recursion(char *s)
{
	static int len = 1;
	int i = 1;

	if (*(s + i) != '\0')
	{
		len++;
		_strlen_recursion(s + i);
	}
	return (len);
}

