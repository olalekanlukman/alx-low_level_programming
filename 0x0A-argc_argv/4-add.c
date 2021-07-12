#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: count of argument
 * @argv: variabe array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	
	if (argc == 0)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atol(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atol(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
