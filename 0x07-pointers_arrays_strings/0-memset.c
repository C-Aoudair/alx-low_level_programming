#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: the ponter to the memory location.
 * @b: the constant byte.
 * @n: the numbet of bytes that must be filled.
 *
 * Return: the pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
