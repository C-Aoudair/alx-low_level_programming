#include "main.h"
/**
 * factorial - returns the factorial of a given nember.
 * @n: The number that must be its factorial calculate.
 *
 * Return: The result of the factorial.
 */
int factorial(int n)
{
	int fact;

	if (n > 0)
		fact = n * factorial(n - 1);
	else if (n == 0)
		fact = 1;
	else
		fact = -1;
	return (fact);
}
