#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13.
 * @s: the string.
 *
 * Return: the string encoded.
 */
char *rot13(char *s)
{
	int i;

	for (i = 1; s[i] != '\0' && s[i - 1] != '\0'; i++)
	{
	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
	if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		s[i] = s[i] + 26;
	s[i] = s[i] - 13;
	i++;
	}
	}
	return (s);
}
