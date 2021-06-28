#include "holberton.h"

/**
 * swap_int - this swaps the values of variable using pointers
 * @a: this is the first pointer
 * @b: this is the second pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
