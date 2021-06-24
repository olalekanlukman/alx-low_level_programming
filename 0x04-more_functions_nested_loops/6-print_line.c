#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: the number of lines
 * Return: 0
 */

void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (n == 0)
			break;

		_putchar('_');
	}
	_putchar('\n');
}
