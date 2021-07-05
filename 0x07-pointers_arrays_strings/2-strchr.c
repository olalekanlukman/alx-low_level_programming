#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a charachter in a string
 * @s:the string
 * @c: the character
 * Return: NULL or s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{	
			return (s + i);
		}
	}
	return (NULL);
}
