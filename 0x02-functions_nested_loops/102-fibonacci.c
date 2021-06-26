#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 2;
	unsigned long int nextnum;
	int i = 3;

	printf("%d", a);
	printf(", %d", b);
	while (i <= 50)
	{
		nextnum = a + b;
		printf(", %lu", nextnum);
		a = b;
		b = nextnum;
		i++;
	}
	printf("\n");
	return (0);
}
