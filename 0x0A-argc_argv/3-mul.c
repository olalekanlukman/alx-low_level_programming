#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: counts the variables
 * @argv: array
 * Return: 0;
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	x = strtol(argv[1], NULL, 10);
	y = strtol(argv[2], NULL, 10);
	printf("%d\n", (x * y));
	return (0);
}
