#include "main.h"
/**
 * wildcmp - compare two strings and returns 1 if the string identical, otherwise p0.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 1 if the two strings considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
