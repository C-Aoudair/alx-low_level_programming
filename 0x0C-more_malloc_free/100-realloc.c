#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size of the ptr.
 * @new_size: The size of the new block.
 *
 * Return: A pointer to the new block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *realloc;
	char *str;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
			return (NULL);
		realloc = malloc(new_size);
		if (realloc == NULL)
			return (NULL);
		str = (char *)ptr;
		for (i = 0; i < old_size; i++)
			realloc[i] = str[i];
		free(ptr);
		return ((void *)realloc);
	}
	realloc = malloc(new_size + old_size);
	return ((void *)realloc);
}
