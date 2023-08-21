#include "main.h"
#include<stdio.h>
/**
 * print_array - print n element of array.
 * @a: the array.
 * @n: the number of the array.
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%i", a[i]);
		if (i != n)
			printf(", ");
		printf("\n");
	}
}
