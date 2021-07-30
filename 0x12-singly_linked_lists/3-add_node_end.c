#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to the end of the list
 * @head: starting head
 * @str: the string in t he node
 *
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int len;
	
	tmp = *head;
	len = 0;
	
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	
	return (new);
}
