#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: the array
 * @size: of array
 * @action: a function pointer
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
