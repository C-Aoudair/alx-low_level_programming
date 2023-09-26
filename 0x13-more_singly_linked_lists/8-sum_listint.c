#include "lists.h"


/**
 * sum_listint - Returns the sum of all data (n) of a listint_t linked list.
 * @head: The list.
 *
 * Return: The num or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int container;
	listint_t *ptr;

	container = 0;
	for (ptr = head; ptr != NULL; ptr = ptr->next)
		container = container + ptr->n;
	return (container);
}
