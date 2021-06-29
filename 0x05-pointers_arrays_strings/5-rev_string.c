#include "holberton.h"

/**
 * rev_string - prints string in reverse
 * @s: this is a pointer variable
 * Return: 0
 */

void rev_string(char *s)
{
	char temp;
	int i, len;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	len = i - 1;
	for (i = 0; i <= len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len--) = temp;
	}
}
