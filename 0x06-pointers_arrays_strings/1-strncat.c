#include "main.h"
/**
 * _strncat - concatenate two string.
 * @dest: first string.
 * @src: second string.
 * @n: the number of the string.
 *
 * Return: the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = i + 1;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
