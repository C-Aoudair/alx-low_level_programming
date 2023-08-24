#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy the string.
 * @src: the string that must be copied:
 * @dest: the copied string.
 * @n: the number of bytes.
 *
 * Return: the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
