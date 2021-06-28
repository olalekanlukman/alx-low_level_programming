#include "holberton.h"

/**
 * _puts - this prints out the string
 * @str: this is the  pointer variable
 * Return 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
