#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: The address of the number.
 * @index: The index.
 *
 * Return: 1 if worked or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index > 63)
		return (-1);
	bit_mask = 1;
	*n = (*n | bit_mask << index);
	return (1);
}
