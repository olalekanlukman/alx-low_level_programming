#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 * Return: a pointer or NULL
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	len = i + 1;
	p = (char *) malloc(len * sizeof(*str));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		*(p + i) = str[i];
	*(p + i) = '\0';
	return (p);
}
