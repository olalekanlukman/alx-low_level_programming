#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase
 * Return: output 0
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
