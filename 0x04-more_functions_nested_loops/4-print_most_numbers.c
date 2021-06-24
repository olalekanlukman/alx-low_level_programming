#include "holberton.h"

/**
 * print_most_numbers - leaves out 2,4 from 0 to 9
 * Return: 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
		{
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
