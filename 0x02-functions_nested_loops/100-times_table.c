#include "holberton.h"

/**
 * print_times_table - this prints out any time table
 * @n: this variable inputs the times table number
 * Return: 0
 */

void print_times_table(int n)
{
	int a = 0, b, p;

	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			p = a * b;
			if (p >= 0 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p <= 9 && b != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (p > 9 && p < 100)
			{
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p > 99)
			{
				_putchar((p / 100) + '0');
				_putchar(((p % 100) / 10) + '0');
				_putchar(((p % 100) % 10) + '0');
			}
			if (b == 0 || (p <= 9 && b != 0))
				_putchar(p + '0');

			if (b == n)
				_putchar('\n');
			b++;
		}
		a++;
	}
}
