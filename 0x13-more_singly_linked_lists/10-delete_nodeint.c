#include "lists.h"


/**
 * delete_nodeint_at_index - Deletes the node at a gived index of a list.
 * @head: The listint_t list.
 * @index: The index of the node that must be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr_1, *ptr_2;
	unsigned int i;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		ptr_1 = (*head)->next;
		free(*head);
		*head = ptr_1;
	}
	else
	{
		if (*head == NULL)
			return (-1);
		for (i = 0, ptr_1 = *head; i < index - 1; i++)
		{
			ptr_1 = ptr_1->next;
			if (ptr_1 == NULL)
				return (-1);
		}
		ptr_2 = ptr_1->next;
		ptr_1->next = ptr_2->next;
		free(ptr_2);
	}
	return (1);
}


