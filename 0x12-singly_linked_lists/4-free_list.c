#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;
	unsigned int count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	while (count)
	{
		temp = head;
		while (temp->next)
			temp = temp->next;
		free(temp);
		count--;
	}
}
