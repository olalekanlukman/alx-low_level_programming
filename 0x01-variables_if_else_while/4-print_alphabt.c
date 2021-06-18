#include <stdio.h>

/**
 * main - this will print out alphabets without q and e
 * Return: this outputs 0
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
		}
		else
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
