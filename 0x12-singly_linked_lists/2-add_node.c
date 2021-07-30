#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: of the nodes
 * @str: striing to insert
 *
 * Return: address of new elemet or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fp;

	fp = malloc(sizeof(list_t));
	if (fp == NULL)
		return (NULL);
	fp->next = *head;
	*head = fp;
	fp->str = strdup(str);
	fp->len = strlen(str);

	return (fp);
}	
