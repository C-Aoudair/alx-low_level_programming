#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m = -m;
	_putchar(m);
	return  (m);
}
