#include "holberton.h"

/**
 * print_diagsums - adds up the two diagonals of a square matirix of integers
 * @a: the array
 * @size: of the array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)};
	}
	printf("%d, %d\n", sum, sum1);
}
