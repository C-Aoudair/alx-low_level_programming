#include "lists.h"


/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: The dlistint_t list.
 *
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	count = 0;
	for (ptr = h; ptr; ptr = ptr->next)
		count++;
	return (count);
}
