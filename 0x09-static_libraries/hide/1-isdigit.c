#include "main.h"

/**
 * _isdigit - check if the variable is a lower case character
 * @c: The variable to be cheched
 *
 * Return: 1 if the variable is a digit. 0 othewise
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	if (i == c)
		return (1);
	}
return (0);
}
