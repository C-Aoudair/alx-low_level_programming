#include "lists.h"


/**
 *free_dlistint - frees a dlistint_t list.
 *
 * @head: Address of head of linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
		head = NULL;
	}
}
