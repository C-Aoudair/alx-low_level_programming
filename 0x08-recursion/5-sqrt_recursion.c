#include "main.h"
/**
 * _sqrt - Return th natural square root of a number.
 * @n: The number.
 * @sqrt: A number for checking.
 *
 * Return: The square of natural root of the number.
 */
int _sqrt(int n, int sqrt)
{
	if ((sqrt * sqrt) > n)
		return (-1);
	else if ((sqrt * sqrt) == n)
		return (sqrt);
	else
		return (_sqrt(n, sqrt + 1));
}
/**
 * _sqrt_recursion - Return th natural square root of a number.
 * @n: The number.
 *
 * Return: The square of natural root of the number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
