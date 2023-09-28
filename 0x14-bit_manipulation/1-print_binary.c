#include "main.h"
#include <stdio.h>


/**
 * print_binary - prints the binary representation of a number.
 * @n: The number.
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int i;

	i = 0;
	bit = 1;

	while (!(n & bit << (63 - i)) && i < 63)
	{
		i++;
	}

	for ( ; i < 64; i++)
	{
		if (n & bit << (63 - i))
			printf("1");
		else
			printf("0");
	}
}
