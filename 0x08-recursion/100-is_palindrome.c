#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: The string that wanted to return its length.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len;


	if (*s != '\0')
	{
		len = _strlen(s + 1) + 1;
		return (len);
	}
	return (0);
}
/**
 * assist - Complimentation of the is_palindrome function.
 * @s: The string for checking it.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome and 0 if not.
 */
int assist(char *s, int len)
{
	if (*s != *(s + len))
		return (0);
	if (len <= 0)
		return (1);
	return (assist((s + 1), (len - 2)));
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The given string.
 *
 * Return: 1 if the string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (_strlen(s) == 0)
		return (1);
	return (assist(s, (_strlen(s) - 1)));
}
