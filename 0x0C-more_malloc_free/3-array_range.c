#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, i;

	p = malloc((max - min + 1) * sizeof(int));
	for (i = 0; i <= (max - min); i++)
		p[i] = i;
	return (p);
}
