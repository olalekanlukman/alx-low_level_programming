#include "holberton.h"

/**
 * print_diagsums - adds up the two diagonals of a square matirix of integers
 * @a: the array
 * @size: of the array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum;

	for (i = 0, j = 0; i < size; i++, j++)
	{
		sum1 += a[i][j];
		printf("%d", sum1);
	}
	i--;
	j--;
	for (; j >= 0; i--, j--)
	{
		sum1 += a[i][j];
		printf(", %d", sum1);
	}
}
