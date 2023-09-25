#include "lists.h"


/**
 * pop_listint - Delete the head of a listint_t linked list.
 * @head: The head of the list.
 *
 * Return: head node's data, or 0 if it is empty.
 */
int pop_listint(listint_t **head)
{
	int container;
	listint_t *ptr;

	container = 0;
	if (*head != NULL)
	{
		container = (*head)->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	return (container);
}

