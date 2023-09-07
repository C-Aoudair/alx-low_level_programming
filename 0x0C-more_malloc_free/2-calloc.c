#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: The number of elements in the array.
 * @size: The size of the elements in the array.
 *
 * Return: A pointer to the allocated memory or NULL if allocation failed.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	calloc = malloc(nmemb * size);
	if (calloc == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		calloc[i] = '\0';
	return ((void *)calloc);
}
