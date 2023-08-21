#include "main.h"
/**
 * swap_int - swap to numbers.
 * @a: the first.
 * @b: the second.
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

