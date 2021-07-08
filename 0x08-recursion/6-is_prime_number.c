#include "holberton.h"

int detect(int n, int i);

/**
 * is_prime_number - detects aprime number
 * @n: the number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (detect(n, 2));
}

/**
 * detect - uses recursion to detect a prime number
 * @n: the num
 * @i: the variable
 * Return: 0 or 1
 */

int detect(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i < sqrt(n))
		return (detect(n, i + 1));
	return (1);
}
