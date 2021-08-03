#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this deletes a list
 * @head: the head of the node
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}