#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees fogs.
 * @d: The dog_t type.
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
