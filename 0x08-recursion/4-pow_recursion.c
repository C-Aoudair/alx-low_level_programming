#include "main.h"
/**
 * _pow_recursion - return the ralue of x raised to the power of y.
 * @x: The number x.
 * @y: The number y.
 *
 * Return: The power.
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y > 0)
		pow = x * _pow_recursion(x, y - 1);
	else if (y == 0)
		pow = 1;
	else
		pow = -1;
	return (pow);
}
