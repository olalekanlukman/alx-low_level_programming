#include "holberton.h"

/**
 * puts2 - prints everyother character in a string
 * @str: this pointer
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
