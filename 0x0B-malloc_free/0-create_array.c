#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes an array
 * @size: of the array
 * @c: content of the array
 * Return: 0 or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);
	p = (char *) malloc(size * sizeof(char));
	if (p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
