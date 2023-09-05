#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: The concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, n1, n2;
	char *con;

	if (s1 == NULL && s2 == NULL)
		n1 = n2 = 0;
	else if (s1 == NULL && s2 != NULL)
	{
		n1 = 0;
		n2 = strlen(s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		n1 = strlen(s1);
		n2 = 0;
	}
	else
	{
		n1 = strlen(s1);
		n2 = strlen(s2);
	}
	con = malloc(n1 + n2 + 1);
	if (con == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
		con[i] = s1[i];
	for (i = 0; i < n2; i++)
		con[i + n1] = s2[i];
	con[i + n1] = '\0';
	return (con);
}
