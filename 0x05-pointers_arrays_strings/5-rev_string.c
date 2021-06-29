#include "holberton.h"

/**
 * rev_string - prints string in reverse
 * @s: this is a pointer variable
 * Return: 0
 */

void rev_string(char *s)
{
	char temp;
	int i, j, len;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	len = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		temp = *(s + j);
		*(s + j) = *(s + len);
		*(s + len--) = temp;
	}
}
