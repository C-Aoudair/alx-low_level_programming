#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

	if (s1 == NULL && s2 != NULL)
	{
		con = malloc(strlen(s2) + 1);
		if (con == NULL)
			return (NULL);
		for (i = 0, n2 = strlen(s2); i <= n2; i++)
			con[i] = s2[i];
	}
	else if (s1 != NULL && s2 == NULL)
	{
		con = malloc(strlen(s1) + 1);
		if (con == NULL)
			return (NULL);
		for (i = 0, n1 = strlen(s1); i <= n1; i++)
			con[i] = s1[i];
	}
	else if (s1 == NULL && s2 == NULL)
	{
		con = malloc(1);
		if (con == NULL)
		return (NULL);
		con[0] = '\0';
	}
	else
	{
		con = malloc(strlen(s1) + strlen(s2) + 1);
		if (con == NULL)
			return (NULL);
		for (i = 0, n1 = strlen(s1); i < n1; i++)
			con[i] = s1[i];
		for (i = 0, n2 = strlen(s2); i <= n2; i++)
			con[i + n1] = s2[i];
	}
	return (con);
}
