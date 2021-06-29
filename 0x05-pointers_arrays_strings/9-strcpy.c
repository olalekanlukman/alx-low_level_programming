#include "holberton.h"

/**
 * _strcpy - this copies string from a pointer to a pointer
 * @dest: this is the destination pointer
 * @src: this is the source pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
