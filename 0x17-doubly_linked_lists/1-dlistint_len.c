#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the numbee of nodes
 * @h: head of the list
 *
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
