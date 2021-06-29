#include "holberton.h"

/**
 * puts_half - print s half of a string
 * @str: a pointer
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j <= i; j++)
			_putchar(str[j]);
	}
	else if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		for (j = n + 1; j <= i; j++)
		{
		_putchar(str[j]);
		}
	}
	_putchar('\n');
}
