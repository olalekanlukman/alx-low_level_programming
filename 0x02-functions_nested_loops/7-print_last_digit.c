#include "holberton.h"

/**
 * print_last_digit - this prints last digit
 * @n: is a variable
 * Return: gives out 0 and1
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((n * -1) % 10) + '0');
	}
	else
	{
		_putchar((n % 10) + '0');
	}
}
