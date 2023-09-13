/**
 * array_iterator - executes a function given as parameter on each el of an ar.
 * @array: The array.
 * @size: The size of the array.
 * @action: a pointer to the function needed.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
