#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The existing list.
 * @str: The str of the added list.
 *
 * Return: The address of the new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
