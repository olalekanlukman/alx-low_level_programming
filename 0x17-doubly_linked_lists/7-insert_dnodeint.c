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

	if (!h)
		return (NULL);
	p = malloc(sizeof(dlistint_t));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	p->n = n;
	ptr = *h;
	if (idx == 0)
	{
		p->prev = ptr->prev;
		p->next = ptr;
		ptr->prev = p;
		ptr = p;
	}
	while (idx && ptr->next)
	{
		ptr = ptr->next;
		idx--;
	}
	if (index)
		return (NULL);
	p->next = ptr->next;
	ptr->next = p;
	p->prev = ptr;
	return (p);
}
