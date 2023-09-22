#include <stdlib.h>
#include "lists.h"


/**
 * free_list - Frees a list.
 * @head: The list.
 *
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			ptr = head->next;
			free(head->str);
			free(head);
			head = ptr;
		}
		free(head->str);
		free(head);
	}
}

