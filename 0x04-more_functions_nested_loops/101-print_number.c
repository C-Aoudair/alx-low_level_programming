#include "main.h"
/**
 * print_number - the an integer.
 * @n: the integer to be printed.
 *
 */
void print_number(int n)
{
	unsigned int x;
	int j = 1000000000;

		if (n != 0)
		{
			if (n < 0)
			{
				_putchar('-');
				x = -n;
			}
			else
				x = n;
			while (1)
			{
				if (x / j != 0)
					break;
				j = j / 10;
			}
			while (j != 1)
			{
				_putchar('0' + x / j);
				x = x % j;
				j = j / 10;
			}
			_putchar('0' + x);
		}
		else
		{
			_putchar('0');
		}
}
