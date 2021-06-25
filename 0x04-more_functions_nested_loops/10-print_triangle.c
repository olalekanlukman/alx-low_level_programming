#include "holberton.h"

/**
 * print_triangle - prints out a triangle
 * @size: determines the magnitude
 * Return: 0
 */

void print_triangle(int size)
{
	int a = 0, b = 0, j = 0;

	while (b < size)
	{
		while (a < size - 1)
		{
			_putchar(' ');
			a++;
		}
		while (a < size + j)
		{
			_putchar('#');
			a++;
		}
		j++;
		_putchar('\n');
		b++;
		a = b;
	}
	if (size <= 0)
		_putchar('\n');
}

