#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it spec char.
 * @size: The size of the array.
 * @c: The specific char.
 *
 * Return: A pointer ot the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;


	if (size == 0)
		return (NULL);
	array = malloc(size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
