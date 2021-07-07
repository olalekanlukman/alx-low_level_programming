#include "holberton.h"

/**
 * _pow_recursion - gives the value of x raised to the power of y
 * @x: the number to be multiplied
 * @y: the power
 * Return: -1 or the multiple
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
