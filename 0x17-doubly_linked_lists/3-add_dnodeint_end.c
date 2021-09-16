#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of the list
 * @head: of the list
 * @n: value of the element
 *
 * Return: the address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *p;

	p = malloc(sizeof(dlistint_t));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	ptr = *head;
	p->n = n;
	p->next = NULL;
	if (*head)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = p;
	}
	if (!*head)
		*head = p;
	p->prev = ptr;

	return (p);
}
