#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: The number of bytes must be allocated.
 *
 * Return: A void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
