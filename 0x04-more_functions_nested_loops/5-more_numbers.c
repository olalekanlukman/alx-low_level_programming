#include "holberton.h"

/**
 * more_numbers - prints up to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int c;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar((c / 10) + '0');
		}

		putchar((c % 10) + '0');
	}
	putchar('\n');
}
