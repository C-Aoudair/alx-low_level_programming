#include "search_algos.h"


/**
 * binary_assistance - assist the binary_search function
 * @start: location to start search from
 * @end: location to end searching at
 * @array: A pointer to the first element of the array to search
 * @value: The value to search for
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
 * binary_search - searchs for a value in an array of integers
 * @size: the number of element in array
 * @array: A pointer to the first element of the array to search
 * @value: The value to search for
 *
 * Return: The index of the value of -1 if not found or array is null
*/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_assistance(array, 0, size - 1, value));
}
