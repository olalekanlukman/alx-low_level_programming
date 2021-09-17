#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given position
 * @head: head of the list
 * @index: position of the node to be deleted
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *ptr, *q;

	if (!(*head))
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		/*
		(*head) = (*head)->next;
		if (ptr->next)
			ptr->next->prev = NULL;
		ptr->next = NULL;
		free(ptr);
		return (1);
		*/
		*head = (*head)->next;
		if (ptr->next)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (index && ptr->next)
	{
		p = ptr;
		index--;
		ptr = ptr->next;
	}
	if (index)
		return (-1);
	q = ptr->next;
	p->next = ptr->next;
	q->prev = p;
	free(ptr);
	return (1);
}
