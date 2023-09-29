#include "main.h"


/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int check;
	char *c;

	check = 1;
	c = (char *)(&check);
	if (c[0])
		return (1);
	return (0);
}

