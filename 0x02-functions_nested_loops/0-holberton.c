#include <stdio.h>
#include "holberton.h"

/**
 * main - This outputs the string holberton
 * Return: This outputs 0
 */

int main(void)
{
	char str[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\0'};
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
