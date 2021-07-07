#include "holberton.h"

/**
 * _print_rev_recursion - prints the reverse of a stirng
 * @s: the string
 * Return: 0;
 */

void _print_rev_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		_print_rev_recursion(s + i);
		_putchar(*s);
	}
}
