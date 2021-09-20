#include "main.h"

/**
 * _strncat - concatenates two strings to a limit
 * @dest: final string
 * @src: appending string
 * @n: length of src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, slen;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
	}
	slen = j;
	if (n > slen)
	{
		for (j = 0; j < slen; j++)
		{
			*(dest + i) = *(src + j);
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			*(dest + i) = *(src + j);
			i++;
		}
	}
	return (dest);
}
