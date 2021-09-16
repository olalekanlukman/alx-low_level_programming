#include "lists.h"

/**
 * sum_dlistint - sums all the data in a doubly linked list
 * @head: of the list
 *
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
