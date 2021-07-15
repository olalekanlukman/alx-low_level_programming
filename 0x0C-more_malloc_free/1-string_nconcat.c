#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to be cut off 2
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	len1 = i;
	len2 = j;
	if (n >= len2)
		p = malloc((len1 + len2 + 1) * sizeof(char));
	else
		p = malloc((len1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	if (n >= len2)
	{
		for (j = 0; j < len2; i++, j++)
			p[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; i++, j++)
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
