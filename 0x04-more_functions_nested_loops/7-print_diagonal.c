#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: this show the lenght of the line
 * Return: 0
 */

void print_diagonal(int n)
{
	int a;
	int q;

	for (a = 0; a < n; a++)
	{
		if (a == 0)
			_putchar('\\');
		if (a > 0)
		{
	/*		_putchar('\n');   */
			_putchar('\n');
			for (q = 0; q < a; q++)
			{
				_putchar(' ');
			}
				_putchar('\\');
		}
	}
	_putchar('\n');
}
