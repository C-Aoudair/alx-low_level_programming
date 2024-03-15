#include "search_algos.h"

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

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return(-1);
}
