#include "main.h"

/**
 * _islower - check if the variable is a lower case character
 * @c: The variable to be cheched
 *
 * Return: 1 if the variable is a lower case character. 0 othewise
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == c)
		return (1);
	}
return (0);
}
