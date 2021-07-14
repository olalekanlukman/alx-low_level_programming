#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the row
 * @height: the col
 * Return: 0
 */

int **alloc_grid(int width, int heightO)
{
	unsigned int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc (sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *) malloc (sizeof(int) * width);
		if (*(p + i) = NULL)
		{
			free(*p + i);
			for (j = 0; j < i; j++)
				free(*p + j);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j];
	}
	return (p);
}
	
