#include "main.h"
/**
 * reverse_array - reverse the array.
 * @a: the array.
 * @n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j =  n / 2; i < j; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 -i) = tmp;
	}
}
