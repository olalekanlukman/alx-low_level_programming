#include "holberton.h"

/**
 * puts2 - prints everyother character in a string
 * @str: this pointer
 * Return: 0
 */

void puts2(char *str)
{
	int i, j, len;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	len = i - 1;
	for (j = 0; j <= len; j++)
		_putchar(*(str + j));

	_putchar('\n');
}
