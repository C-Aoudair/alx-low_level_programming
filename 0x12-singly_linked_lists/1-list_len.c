#include <stdio.h>
#include "lists.h"


/**
 * list_len - Returns the number of elements of a list_t list.
 * @h: A list.
 *
 * Return: The number of node.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t count;

	count = 0;
	for (ptr = h; ptr != NULL; ptr = ptr->next)
		count++;
	return (count);
}
