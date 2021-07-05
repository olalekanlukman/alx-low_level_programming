#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: this is the starting string
 * @accept: this is the counted string
 * Return: no of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f = 0, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		return (f);

	}
	return (0);
}
