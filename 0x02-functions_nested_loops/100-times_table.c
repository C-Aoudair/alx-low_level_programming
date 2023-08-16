#include "main.h"
/**
 * print_times_table - print the n table starting with 0
 * @n: the number of the table
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int m;
	int l;

if (n < 15 && n > 0)
{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			l = j * i;
			if (l >= 100)
			{
				m = l % 100;
				_putchar('0' + l / 100);
				_putchar('0' + m / 10);
				_putchar('0' + m);
			}
			else if (l >= 10)
			{
				_putchar(' ');
				_putchar('0' + l / 10);
				_putchar('0' + l % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + l);
			}
			_putchar('\n');
		}
	}
}
}
