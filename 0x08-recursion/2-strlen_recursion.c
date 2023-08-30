#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string that wanted to return its length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len;


	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
		return (len);
	}
	else
		return (0);
}
