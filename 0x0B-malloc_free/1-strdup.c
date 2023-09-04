#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new str which is duplicate of  a given str.
 * @str: The string that must be copied into the newly string.
 *
 * Return: a pointer to new str or NULL if str is str is NULL or insuff mem.
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int n;

	if (str == NULL)
		return (NULL);
	n = strlen(str);
	cpy = malloc(n + 1);
	if (cpy != NULL)
	{
		for (i = 0; i <= n; i++)
		{
			cpy[i] = str[i];
		}
	}
	return (cpy);
}
