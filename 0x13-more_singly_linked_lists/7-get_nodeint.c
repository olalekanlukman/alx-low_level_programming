#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: of the list
 * @index: position of the nth node starting from 0
 *
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	tmp = head;

	while (tmp && count < index)
	{
		count++;
		tmp = tmp->next;
	}

	return (tmp);
}
