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
	int i;
	int n1, n2;
	char *con;

	n1 = strlen(s1);
	n2 = strlen(s2);
	con = malloc(n1 + n2 + 1);
	if (con != NULL)
	{
		for (i = 0; i < n1; i++)
		{
			con[i] = s1[i];
		}
		for (i = 0; i <= n2; i++)
		{
			con[i + n1] = s2[i];
		}
	}
	return (con);
}
