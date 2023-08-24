#include "main.h"
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
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i < j)
		return (-15);
	else if (i == j)
		return (0);
	else
		return (15);
}
