#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of integers using
 * Jump algorithm
 *
 * @list: list to searched
 * @size: size of the list
 * @value: value to search for
 *
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *ptr;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do {
		ptr = list;
		k++;
		index = k * m;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)ptr->index, (int)list->index);

	for (; ptr && ptr->index <= list->index; ptr = ptr->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)ptr->index, ptr->n);
		if (ptr->n == value)
			return (ptr);
	}

	return (NULL);
}
