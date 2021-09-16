#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: of the node
 * @index: position
 *
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	ptr = head;

	while (index && ptr)
	{
		ptr = ptr->next;
		index--;
	}
	if (!head || index)
		return (NULL);
	else
		return (ptr);
}
