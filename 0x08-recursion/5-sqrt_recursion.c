#include "holberton.h"

int _sqrt_guess(int n, int i);

/**
 * _sqrt_recursion - this returns the square root of a num
 * @n: the number
 * Return: 0, -1 or a num
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_guess(n, 2));
}

/**
 * _sqrt_guess - help with guessinig
 * @i: the number to use and guess
 * @n: the square p
 * Return: all possible integers
 */

int _sqrt_guess(int n, int i)
{
	if (n == 1)
		return (1);
	if ((i * i != n && i > n) || n <= 0)
		return (-1);
	if (i * i == n)
		return (i);
	return	(_sqrt_guess(n, i + 1));
}
