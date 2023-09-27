#include "lists.h"


/**
 * print_listint_safe - Prints a listint_t linked list. with a loop.
 * @head: The list.
 *
 * Return: The number of node int the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t const **list;
	const listint_t *ptr;
	size_t count, i;

	if (head == NULL)
		exit(98);
	list = malloc(8);
	if (list == NULL)
		exit(98);
	*list = head;
	count = 0;
	for (ptr = head; ptr->next != NULL; ptr = ptr->next)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count = count + 1;
		for (i = 0; i < count; i++)
			if (ptr->next == *(list + i))
			{
				ptr = ptr->next;
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				free(list);
				return (count);
			}
		list = realloc(list, (1 + count) * 8);
		if (list == NULL)
			exit(98);
		*(list + count) = ptr->next;
	}
	free(list);
	return (count);
}

