#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers.
 * @min: The min value in the array.
 * @max: The max value in the array.
 *
 * Return: A pointer to the array or NULL if failed.
 */
int *array_range(int min, int max)
{
	int i, j;
	int *range;

	if (min > max)
		return (NULL);
	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		range[j] = i;
	return (range);
}
