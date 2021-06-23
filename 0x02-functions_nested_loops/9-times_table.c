#include "holberton.h"

/**
 * times_table - this will print 9 times table
 * Return: 0
 */

void times_table(void)
{
	int a = 0, b, p;

	while (a <= 9)
{
	b = 0;
	while (b <= 9)
	{
		p = a * b;
		if (p < 9 && b != 9)
		{
		_putchar(p + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else if (p > 9 && b != 9)
		{
		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else if (b == 9 && p < 10)
		{
		_putchar(p + '0');
		_putchar('\n');
		}
		else if (b == 9 && p > 10)
		{
		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
		_putchar('\n');
		}
		b++;
		}
		a++;
		b = 0;
	}
}
