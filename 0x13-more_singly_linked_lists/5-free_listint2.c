#include "lists.h"


/**
 * free_listint2 - Frees a listint_t list.
 * @head: The list.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	free(head);
	head = NULL;
}

