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
	while (!(n & bit << (63 - i)) && i < 64)
		i++;
	if (i == 63)
		printf("0\n");
	for ( ; i < 64; i++)
	{
		if (n & bit << (63 - i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
