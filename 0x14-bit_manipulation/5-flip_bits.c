#include "main.h"


/**
 * flip_bits - computes the number of bits needed to flip to get from n to m.
 * @n: The number to get from.
 * @m: The number to get to.
 *
 * Return: The number of bits fliped..
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp, bit_mask;
	unsigned int count;
	int i;

	tmp = n ^ m;
	if (tmp == 0)
		return (0);
	bit_mask = 1;
	count = 0;
	for (i = 0; i < 63 && tmp != 0; i++)
	{
		if (tmp & bit_mask << i)
			count = count + 1;
		tmp = (tmp & ~(bit_mask << i));
	}
	return (count);
}
