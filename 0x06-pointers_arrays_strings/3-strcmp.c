#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares to string.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: indecator to the result.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] < s2[i] )
		return (-15);
	else if (s1[i] > s2[i])
		return (15);
	}
	return (0);
}
