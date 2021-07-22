#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints out numbers
 * @separator: what seperates the numbers
 * @n: the total numbers count
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;
	int num;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		if (i == n - 1)
			printf("%d\n", num);
		else
		{
			if (!separator)
				printf("%d", num);
			else
				printf("%d%s", num, separator);
		}
		va_end(list);
	}
}
