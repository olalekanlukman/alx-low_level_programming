#include "function_pointers.h"

/**
 * print_name - prints using a pointer to a function
 * @name: name to be printed
 * @f: the funtion pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
