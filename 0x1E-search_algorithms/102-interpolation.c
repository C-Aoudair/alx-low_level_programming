#include "search_algos.h"

/**
 * interpolation - search function using interpolation algorithm
 * @array: the array to be searched
 * @low: the lowest index in the array or subarray
 * @high: the highest index in the array or subarray
 * @value: the value to search for 
*/

int interpolation(int *array, size_t low, size_t high, int value)
{
    size_t pos;

    if (low <= high)
    {
        if ( low == high && array[low] == value)
            pos = low;
        else
            pos = low + (((double)(high - low) / (array[high] - array[low]))
            * (value - array[low]));

        if (pos > high || pos < low)
        {
            printf("Value checked array[%li] is out of range\n", pos);
            return (-1);
        }
        printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
        if (array[pos] == value)
            return pos;
        if (array[pos] < value)
            return (interpolation(array, pos + 1, high, value));
        return (interpolation(array, low, pos - 1, value));
    }
    return (-1);
}


/**
 * interpolation_search - searchs for a value using interpolation algorithm
 * @size: the number of element in array
 * @array: A pointer to the first element of the array to search
 * @value: The value to search for
 * 
 * Return: The index of the value of -1 if not found or array is null
*/

int interpolation_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);
    
    return (interpolation(array, 0, size - 1, value));
}