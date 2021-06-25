#include <stdio.h>

/**
 * main - this prints out the sum of all multiples of3 and 5 
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
