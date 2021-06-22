#include "holberton.h"
/**
 * print_alphabet - this prints alphabets from a different function
 */


void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
