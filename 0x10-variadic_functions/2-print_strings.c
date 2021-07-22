#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator of string
 * @n: num of strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;
	char *num;

	va_start(list, n);
	if (separator == NULL || n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, char*);
		if (num == NULL)
			num = "(nil)";
		if (i == n - 1)
			printf("%s\n", num);
		else
		{
			printf("%s%s", num, separator);
		}
	}
	va_end(list);
}
