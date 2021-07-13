#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: 0 NULL or string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
		;
	len1 = i;
	for (j = 0; s2[j] != '\0'; j++)
		;
	len2 = j + 1;
	p = (char *) malloc((len1 + len2) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(p + i) = *(s1 + i);
	for (j = 0; j < len2; j++)
	{
		*(p + i) = *(s2 + j);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
