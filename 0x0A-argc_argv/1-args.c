#include <stdio.h>

/**
 * main - prints the no of arguments passed into it
 * @argc: counts the arguments
 * @argv: collections of the argument
 * Return: 0;
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
