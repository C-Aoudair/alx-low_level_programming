
#include "search_algos.h"

/**
 * linear_skip - searchs for value in a sorted skip list of intergers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: the node found or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *ptr = list;

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		if (!list->express)
			break;
		ptr = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	if (list->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				ptr->index, list->index);
		list = ptr;
	}
	else
	{
		for (ptr = list; ptr->next; ptr = ptr->next)
			;
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, ptr->index);
	}
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
