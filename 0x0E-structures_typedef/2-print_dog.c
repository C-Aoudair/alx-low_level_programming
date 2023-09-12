#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog.
 * @d: The struct dog.
 *
 */
void print_dog(struct dog *d)
{
	int x = 0;

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
		if (d->name == NULL && d->owner == NULL)
			d->age = (float)x;
		printf("Age: %f\n", d->age);
	}
}
