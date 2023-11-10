#include "lists.h"


/**
 * sum_dlistint - returns sum of all data of a list.
 *
 * @head: Address of head of linked list.
 *
 * Return: The sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
