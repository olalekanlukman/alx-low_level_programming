#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: is the final string
 * @src: this is the appending string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
	}
	len = j;
	for (j = 0; j <= len; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
