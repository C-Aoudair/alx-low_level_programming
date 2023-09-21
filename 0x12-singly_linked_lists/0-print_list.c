#include <stdio.h>
#include "lists.h"


/**
 * print_list - Prints all elements of a list_t list.
 * @h: A list.
 *
 * Return: The number of node.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count;
	char *string;
	int length;

	count = 0;
	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		length = (ptr->str == NULL ? 0 : ptr->len);
		string = (ptr->str == NULL ? "(nil)" : ptr->str);
		printf("[%u] %s\n", length, string);
		count++;
	}
	return (count);
}
