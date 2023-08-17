#include "main.h"
/**
 * print_triangle - print the triangle.
 * @size: the size of the triangle.
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = size - i; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
