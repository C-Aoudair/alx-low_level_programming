#include "search_algos.h"
#include <math.h>

/**
 * linear_search - searchs for a value in an array of integers
 * @size: the number of element in array
 * @array: A pointer to the first element of the array to search
 * @value: The value to search for
 * 
 * Return: The index of the value of -1 if not found or array is null
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return(-1);
}

/**
 * jump_search - search in sorted array for a value using jump algorithm.
 * @size: the number of element in array
 * @array: A pointer to the first element of the array to search
 * @value: The value to search for
 * 
 * Return: The index of the value of -1 if not found or array is null
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step, i;

	if (array == NULL || size == 0)
		return (-1);
	step = (int)sqrt(size);
	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%li] and [%li]\n", i - step, i);
			return (i - step + linear_search(array + (i - step), step, value));
		}
		else
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
	}
	return (-1);
}
