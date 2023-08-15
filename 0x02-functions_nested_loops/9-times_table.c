#include "main.h"
/**
 * times_table - print the 9 times table
 *
 */
void times_table(void)
{
	int i;
	int j;
	int n;
	int m;
	int l;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			m = n / 10;
			l = n % 10;
			if (m == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + l);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + m);
				_putchar('0' + l);
			}
		}
		_putchar('\n');
	}
}
