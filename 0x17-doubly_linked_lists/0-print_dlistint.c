#include "lists.h"


/**
 * print_dlistint - prints all elements of a dlintint_t list.
 * @h: The dlistint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	count = 0;
	for (ptr = h; ptr; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		count++;
	}
	return (count);
}

