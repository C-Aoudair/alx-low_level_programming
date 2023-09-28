#include "main.h"
#include <string.h>
#include <math.h>


/**
 * binary_to_uint - converts a binary number ot an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number of 0 if b is NULL or contains more the 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int result;

	result = 0;
	for (i = 0, j = strlen(b); i < j; i++)
	{
		if (b[j - i - 1] == '1')
			result = result + pow(2, i);
		else if (b[j - i - 1] == '0')
			continue;
		else
			return (0);
	}
	return (result);
}
