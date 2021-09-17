#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: head of the node
 * @idx: the position
 * @n: element value
 *
 * Return: the added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *ptr;

	p = malloc(sizeof(dlistint_t));
	if (!p || !*h)
		return (NULL);
	p->n = n;
	ptr = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx && ptr)
	{
		ptr = ptr->next;
		idx--;
		if (!ptr->next && idx == 1)
			return (add_dnodeint_end(h, n));
		if (idx == 1)
		{
		p->next = ptr->next;
		ptr->next = p;
		ptr->next->prev = p;
		p->prev = ptr;
		return (p);
		}
	}
	if (idx)
		return (NULL);
	return (NULL);
}
