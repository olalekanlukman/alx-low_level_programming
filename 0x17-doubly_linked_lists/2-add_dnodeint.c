#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to the begining of a list
 * @head: of the node
 * @n: value of element
 *
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	if (*head)
		(*head)->prev = ptr;
	(*head) = ptr;

	return (*head);
}
