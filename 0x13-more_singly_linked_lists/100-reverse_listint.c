#include "lists.h"


/**
 * reverse_listint - Reverse a listint_t linked list.
 * @head: The list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_list, *ptr;

	rev_list = NULL;
	if (head != NULL && *head != NULL)
	{
		do {
			ptr = (*head)->next;
			(*head)->next = rev_list;
			rev_list = *head;
			*head = ptr;
		} while (ptr != NULL);
	}
	*head = rev_list;
	return (*head);
}
