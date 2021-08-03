#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a particular index
 * @head: of the node
 * @index: of the node to be deleted
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp1;

	tmp = *head;
/*	while ((*head)->next)
	{
		count++;
		*head = (*head)->next;
	}
	*head = tmp;
*/	if (!(*head))
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (index--)
	{
		tmp1 = tmp;
		tmp = tmp->next;
	}

	tmp1->next = tmp->next;
	free(tmp);

	return (1);
}

