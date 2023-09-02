#include "main.h"
/**
 * _strcpy - copies the string to another string.
 * @dest: the home of the character.
 * @src: the destination.
 *
 * Return: the pointer to the new string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

