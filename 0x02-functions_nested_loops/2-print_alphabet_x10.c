#include "holberton.h"

/**
 * print_alphabet_x10 - this prints alphabet ten times
 */


void print_alphabet_x10(void)
{
	int i = 0;
	int alpha = 'a';

	while (i <= 9)
	{
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		putchar('\n');
		i++;
	}
}
