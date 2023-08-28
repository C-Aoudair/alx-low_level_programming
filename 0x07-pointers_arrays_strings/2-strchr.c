#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: The pointer ot the string.
 * @c: The character looked for.
 *
 * Return: A pointer to first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	do {
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	} while (s[i] != '\0');
	return (NULL);
}
