#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add: Add two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The subtraction.
 */
int op_sub(int a, int b)
{
	return (a -(b));
}

/**
 * op_mul - multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - moduto of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by a.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
