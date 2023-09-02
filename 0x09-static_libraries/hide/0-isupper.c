#include "main.h"

/**
 * _isupper - check if the variable is a lower case character
 * @c: The variable to be cheched
 *
 * Return: 1 if the variable is a lower case character. 0 othewise
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
	if (i == c)
		return (1);
	}
return (0);
}
