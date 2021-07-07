#include "holberton.h"

/**
 * factorial - returns factorial of a given num
 * @n: the number
 * Return: the factorial or 1 -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}
