#include "main.h"
/**
 * print_number - the an integer.
 * @n: the integer to be printed.
 *
 */
void print_number(int n)
{
	int i = 10;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (1)
	{
		if (n / i == 0)
			break;
		i = i * 10;
	}
	i = i / 10;
	while (i != 1)
	{
		_putchar('0' + n / i);
		n = n % i;
		i = i / 10;
	}
	_putchar('0' + n);
}
