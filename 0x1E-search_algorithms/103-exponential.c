#include "search_algos.h"


/**
 * binary_assistance - assist the binary_search function
 * @start: location to start search from
 * @end: location to end searching at
 * @array: A pointer to the first element of the array to search
 * @value: The value to search for
 *
 * Return: Return: The index of the value of -1 if not found or array is null
*/
int binary_assistance(int *array, int start, int end, int value)
{
	int middle, i;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);

	middle = (end + start) / 2;
	if (array[middle] == value)
		return (middle);
	if (array[middle] < value)
		start = middle + 1;
	else
		end = middle - 1;

	return (binary_assistance(array, start, end, value));
}


/**
 * exponential_search - search for a value using exponential alhorithm.
 * @array: A pointer to the first element of the array to search
 * @size: the number of element in array
 * @value: The value to search for
 *
 * Return: The index of the value of -1 if not found or array is null
*/
int exponential_search(int *array, size_t size, int value)
{
	int start, end;
	size_t i = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (array[i] <= value && i < size)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i = i * 2;
	}

	start = i / 2;
	end = i <= size - 1 ? i : size - 1;
	printf("Value found between indexes [%i] and [%i]\n", start, end);

	return (binary_assistance(array, start, end, value));
}
