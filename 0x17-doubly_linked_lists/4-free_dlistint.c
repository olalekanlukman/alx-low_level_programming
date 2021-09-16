#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linke dlist
 * @head: of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr->next)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
	free(head);
}
