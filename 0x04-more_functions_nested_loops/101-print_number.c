#include "main.h"
/**
 * print_number - the an integer.
 * @n: the integer to be printed.
 *
 */
void print_number(int n)
{
	int j = 1000000000;

		if (n != 0)
		{
			if (n < 0)
			{
				_putcahr('-');
				n = -n;
			}
			while (1)
			{
				if (n / j != 0)
					break;
				j = j / 10;
			}
			while (j != 1)
			{
				_putchar('0' + n / j);
				n = n % j;
				j = j / 10;
			}
			_putchar('0' + n);
		}
		else
		{
			_putchar('0');
		}
}
