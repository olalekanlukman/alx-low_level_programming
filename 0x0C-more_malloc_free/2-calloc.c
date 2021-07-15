#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: of each member in bytes
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p, *q;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	q = memset(p, 0, nmemb * size);
	return (q);
}
