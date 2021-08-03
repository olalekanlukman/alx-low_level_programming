#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * and returns the head nodes data
 * @head: of the nodes
 *
 * Return: n data of the first node
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	num = (*head)->n;

	*head = (*head)->next;
	free(temp);

	return (num);
}
