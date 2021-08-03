#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: of the node
 * @idx: index or position of the node
 * @n: the value of n
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2, *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	tmp = *head;
	while ((*head)->next)
	{
		count++;
		*head = (*head)->next;
	}
	*head = tmp;
	if (count < idx || !(*head))
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
	while (--idx)
		tmp = tmp->next;
	
	tmp2 = tmp->next;
	new->next = tmp2;

	tmp->next = new;
	}
	return (new);
}
