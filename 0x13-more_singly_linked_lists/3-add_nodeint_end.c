#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds node to the end of the list
 * @head: of the node
 * @n: newnode n value
 *
 * Return: NULL or pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
