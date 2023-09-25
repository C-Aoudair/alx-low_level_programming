#include "lists.h"


/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: The list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	for (i = 0, ptr = head; i < index; i++)
	{
		if (ptr == NULL)
			break;
		ptr = ptr->next;
	}
	return (ptr);
}
