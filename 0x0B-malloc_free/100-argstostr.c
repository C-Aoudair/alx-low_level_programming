#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the program.
 * @ac: The number of the arguments.
 * @av: The arguments.
 *
 * Return: Apointer to new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *strcon;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len = len + strlen(av[i]);
	strcon = malloc(len + ac + 1);
	if (strcon == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac; i++, j++)
	{
		for (k = 0; av[i][k] != '\0'; k++, j++)
			strcon[j] = av[i][k];
		strcon[j] = '\n';
	}
	strcon[j] = '\0';
	return (strcon);
}
