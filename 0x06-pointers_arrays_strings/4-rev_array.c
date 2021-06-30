#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: this is the array
 * @n: length of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, len, temp;

	len = n - 1;
	for (i = 0; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[len];
		a[len--] = temp;
	}
}
