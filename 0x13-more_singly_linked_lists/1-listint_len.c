#include "lists.h"

/**
 * listint_len - returns number of the node
 * @h: head of the node
 *
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
