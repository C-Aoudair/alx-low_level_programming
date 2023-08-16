#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number that the fonction takes
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("98\n");
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("98\n");
	}
	else
		printf("98\n");
}

