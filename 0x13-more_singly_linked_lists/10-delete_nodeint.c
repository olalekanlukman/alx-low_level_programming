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
	if (!(*head))
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (*head)
	{
		if (index != 0)
		{
			tmp1 = tmp;
			tmp = tmp->next;
		}
		else
			break;
		index--;
	}

	tmp1->next = tmp->next;
	free(tmp);

	return (1);
}

