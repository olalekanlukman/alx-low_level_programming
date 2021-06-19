#include <stdio.h>

/**
 * main - this will output combination of two numbers with
 * out repeating
 * Return: this outputs 0
 */

int main(void)
{
	int a = 48;
	int b = 49;
	int j = 49;

	while (a <= 57)
	{
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
			
		}
	b = (b / b) + j;
	a++;
	j++;
	}
	putchar('\n');
	return (0);
}
