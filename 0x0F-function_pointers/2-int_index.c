#include <stdio.h>
/**
 * int_index - searches for an integer in an array.
 * @array: The array.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: An index to the integer or -1 if there is no integers or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
