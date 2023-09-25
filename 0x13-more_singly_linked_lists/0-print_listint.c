#include <stdio.h>
#include "lists.h"


/**
 * print_listnt - Prints all elements of a list_t list.
 * @h: A list.
 *
 * Return: The number of node.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count;

	count = 0;
	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		printf("%i\n", ptr->n);
		count++;
	}
	return (count);
}
