#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type truct dog.
 * @d: The name of the struct.
 * @name: The first parameter of the struct.
 * @age: The second parameter of the struct.
 * @owner: The third parameter of the struct.
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
