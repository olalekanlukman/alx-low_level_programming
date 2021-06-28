#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints out array
 * @a: pointer to array
 * @n: lenght of array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", *a);
		else if (i > 0)
			printf(", %d", *(a + i));
	}
	printf("\n");
}
