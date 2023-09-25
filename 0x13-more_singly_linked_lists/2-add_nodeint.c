#include "lists.h"


/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: The existing list.
 * @n: The the content of the new list.
 *
 * Return: The new list with the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

