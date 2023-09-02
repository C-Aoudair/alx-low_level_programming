#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer to the  memory area that will copy into.
 * @src: pointer to the copied memory area.
 * @n: the number of bytes that will be copied.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
