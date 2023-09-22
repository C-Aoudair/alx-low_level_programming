#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: The existing list.
 * @str: The str of the added list.
 *
 * Return: The address of the new element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
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
