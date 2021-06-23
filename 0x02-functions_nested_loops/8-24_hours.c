#include "holberton.h"

/**
 * jack_bauer - this print 24 hour time
 * Return: this returns 0
 */

void jack_bauer(void)
{
	int a = 0;

	while (a < 24)
	{
		int b = 0;

		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			-putchar('\n');
			b++;
		}
		a++;
	}
}
