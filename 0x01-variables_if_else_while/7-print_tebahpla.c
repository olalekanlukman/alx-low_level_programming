#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: output 0
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
