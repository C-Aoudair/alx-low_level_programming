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
	for (j = 0; dest[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
		if ((j == n - 1))
		{
			i++;
			break;
		}
	}
	dest[i] = '\0';
	return (dest);
}
