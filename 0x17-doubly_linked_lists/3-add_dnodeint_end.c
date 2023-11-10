#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The address of the list.
 * @n: The content of the list.
 *
 * Return: The address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
			;
		ptr->next = new;
	}
	return (new);
}
