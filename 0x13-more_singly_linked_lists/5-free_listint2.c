#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - deletes a list and sets the head to NULL
 * @head: of the node
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
