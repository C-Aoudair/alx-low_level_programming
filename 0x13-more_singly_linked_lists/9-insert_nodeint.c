#include "lists.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a giver position.
 * @head: The list.
 * @idx: The index of the new list.
 * @n: The content of the new node.
 *
 * Return: The address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i;

	if (n == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0, ptr = *head; i < idx; i++)
		{
			if (ptr == NULL)
				return (NULL);
			ptr = ptr->next;
		}
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = ptr->next;
		ptr->next = new;
	}
	return (new);
}
