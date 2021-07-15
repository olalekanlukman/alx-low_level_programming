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
	
	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
