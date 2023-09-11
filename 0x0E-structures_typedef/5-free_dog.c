#include <stdlib>
#include "main.h"
#include <stdio.h>

/**
 * free_dog - frees fogs.
 * @d: The dog_t type.
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
