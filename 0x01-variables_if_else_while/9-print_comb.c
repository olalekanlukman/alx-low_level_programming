#include <stdio.h>

/**
 * main - this will print numbers with commas
 * Return: this outputs 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n == 57)
		{
			putchar(n);
		}
		else
		{
			putchar(n);
			putchar(44);
			putchar(32);
		}
		n++;
	}
	return (0);
