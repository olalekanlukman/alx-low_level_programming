#include "lists.h"

/**
 * sum_listint - sums up all the data(n) of the linked list
 * @head: of the node
 *
 * Return: the sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
