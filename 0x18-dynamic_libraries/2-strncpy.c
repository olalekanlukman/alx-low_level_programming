#include "main.h"

/**
 * _strncpy - this copies a string
 * @dest: this is the final string
 * @src: this is the copied string
 * @n: the length of the string tho be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, len;

	for (i = 0; *(src + i) != '\0'; i++)
	{
	}
	len = i;
	if (n <= len)
	{
		for (j = 0; j < n; j++)
			*(dest + j) = *(src + j);
	}
	else
	{
		for (j = 0; *(src + j) != '\0'; j++)
			*(dest + j) = *(src + j);
		for (i = 0; j < n; i++)
		{
			*(dest + j) = '\0';
			j++;
		}
	}
	return (dest);
}
