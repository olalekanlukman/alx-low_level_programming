#include "holberton.h"

/**
 * _puts_recursion - prints out a string using recursion
 * @s: the stirng
 * Return: 0;
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
