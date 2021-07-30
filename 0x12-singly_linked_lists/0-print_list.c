#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints out content of a singly linked list
 * @h: head of the node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil\n)");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}
