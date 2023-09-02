#include "main.h"
/**
 * _strlen - get the length of the string.
 * @s: the string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
