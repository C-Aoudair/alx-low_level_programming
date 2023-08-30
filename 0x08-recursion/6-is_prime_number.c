#include "main.h"
/**
 * assist - assistance for the is_prime function.
 * @n: the given number.
 * @m: the test number.
 *
 * Return: the 1 if n is prime number, 0 otherwise.
 */
int assist(int n, int m)
{
	if ((n % m) == 0)
	{
		if (n == m)
			return (1);
		else
			return (0);
	}
	else
		return (assist(n, m + 1));
}
/**
 * is_prime_number - check if a given number is a prime or not.
 * @n: The given number.
 *
 * Return: 1 if n is a prime number or 0 otherwise.
 */
int is_prime_number(int n)
{
	if ((n == 1) || (n == -1))
		return (0);
	else
		return (assist(n, 2));
}
