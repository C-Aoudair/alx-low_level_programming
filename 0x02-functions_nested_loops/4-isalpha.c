#include "main.h"

/**
 * _isalpha - check if the variable is an alphabet character
 * @c: The variable to be cheched
 *
 * Return: 1 if the variable is a lower case character. 0 othewise
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
