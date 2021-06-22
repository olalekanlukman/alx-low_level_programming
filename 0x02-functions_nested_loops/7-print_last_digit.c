#include "holberton.h"

/**
 * print_last_digit - this prints last digit
 * @n: is a variable
 * Return: gives out 0 and1
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = ((n * -1) % 10);
		_putchar(a + '0');
	}
	else
	{
		a = (n % 10);
		_putchar(a + '0');
	}
	return (a);
}
