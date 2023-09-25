#include "lists.h"
#include "lists.h"


/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: The listint_t list.
 *
 * Return: The number of node int the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	count = 0;
	for (ptr = h; ptr != NULL; ptr = ptr->next)
		count++;
	return (count);
}
