#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name2;
	char *owner2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name2 = malloc(strlen(name) + 1);
	if (name2 == NULL)
		return (NULL);
	name2 = strcpy(name2, name);
	dog->name = name2;
	dog->age = age;
	owner2 = malloc(strlen(owner) + 1);
	if (owner2 == NULL)
		return (NULL);
	owner2 = strcpy(owner2, owner);
	dog->owner = owner2;
	return (dog);
}
