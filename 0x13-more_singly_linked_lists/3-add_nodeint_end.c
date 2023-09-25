#include "lists.h"


/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: The head of the existing list.
 * @n: The content of the new element.
 *
 * Return: The address of the new element of NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
			;
		ptr->next = new;
	}
	return (*head);
}

