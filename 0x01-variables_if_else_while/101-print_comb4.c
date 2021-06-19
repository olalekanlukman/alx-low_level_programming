#include <stdio.h>

/**
 * main - this outputs combination of three numbers
 * Return: outputs 0
 */

int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;
	int i = 50;
	int j = 50;
	int k = 50;
	int q = 49;

	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			c = (c / c) + j;
			b++;
			j++;
		}
		b = (b / b) + q;
		c = (c / c) + k;
		j = (j / j) + i;
		a++;
		q++;
		k++;
		i++;
	}
}
