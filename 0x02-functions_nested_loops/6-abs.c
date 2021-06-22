#include "holberton.h"

/**
 * _abs - puts out absolute values
 * @a: is a varialbe
 * Return: ooutputs 0
 */

int _abs(int a)
{
	int n;

	if (a < 0)
	{
		n = a * -1;
		_putchar(n + '0');
	}
	else
	{
		n = a;
		_putchar(n + '0');
	}
	return (n);
}
