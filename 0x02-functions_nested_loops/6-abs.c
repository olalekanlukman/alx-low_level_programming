#include "holberton.h"

/**
 * _abs - puts out absolute values
 * @a: is a varialbe
 * Return: ooutputs 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		putchar((a * -1) + '0');
	}
	else
	{
		putchar(a + '0');
	}
}
