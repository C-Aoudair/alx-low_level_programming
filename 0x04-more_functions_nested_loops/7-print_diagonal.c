#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the tirminal.
 * @n: the lingth of the the diagonal.
 *
 */
void print_diagonal(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		for (i = n; i > 0; i--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
