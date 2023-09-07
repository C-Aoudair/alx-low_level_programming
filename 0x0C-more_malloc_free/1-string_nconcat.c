#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters from s2 that will be concatenate with s1.
 *
 * Return: Pointer to the new string or NULL if the concatenation failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, n1, n2;
	char *str;

	n1 = s1 == NULL ? 0 : strlen(s1);
	n2 = s2 == NULL ? 0 : n < strlen(s2) ? n : strlen(s2);
	str = malloc(n1 + n2 + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
		str[i] = s1[i];
	for (i = 0; i < n2; i++)
		str[n1 + i] = s2[i];
	str[n1 + i] = '\0';
	return (str);
}
