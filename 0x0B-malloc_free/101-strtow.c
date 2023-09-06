#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * words_number - Get the number of the words in a string.
 * @str: the string.
 *
 * Return: The number of the words.
 */
int words_number(char *str)
{
	int i, wn;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (; str[i] == ' '; i++)
			;
		for (; str[i] != ' ' && str[i] != '\0'; i++)
			;
		if (str[i] == '\0' && str[i - 1] == ' ')
			break;
		if (str[i] == '\0')
		{
			wn++;
			break;
		}
		wn++;
	}
	return (wn);
}
/**
 * wordlen - get the length of the words in a string.
 * @str: The string.
 * @i: The index of the string.
 *
 * Return: The length of the words.
 */
int wordlen(char *str, int *i)
{
	int wlen = 0;

	for ( ; str[*i] != ' ' && str[*i] != '\0'; (*i)++)
		wlen++;
	return (wlen);
}
/**
 * strtow - splits a string into words.
 * @str: The string.
 *
 * Return: A poiter to an array of strings or NULL.
 */
char **strtow(char *str)
{
	int i, n1, n2, k, j;
	char **table;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	n1 = words_number(str);
	if (n1 == 0)
		return (NULL);
	table = malloc((n1 + 1) * 8);
	if (table == NULL)
		return (NULL);
	for (j = 0, i = 0; j < n1; j++)
	{
		for (; str[i] == ' '; i++)
			;
		n2 = wordlen(str, &i);
		table[j] = malloc(n2 + 1);
		if (table[j] == NULL)
			return (NULL);
		for (k = 0; k < n2; k++)
			table[j][k] = str[i - n2 + k];
		table[j][k] = '\0';
	}
	table[j] = NULL;
	return (table);
}
