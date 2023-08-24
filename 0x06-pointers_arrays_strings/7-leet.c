#include "main.h"
#include <stdio.h>
/**
 * leet - encoders a string into 1337.
 * @s: the string.
 *
 * Return: the string encodered.
 */
char *leet(char *s)
{
	int i, j;
	char c1[5] = "aeotl";
	char c2[5] = "AEOTL";
	char tm[5] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c1[j] || s[i] == c2[j])
				s[i] = tm[j];
		}
	}
	return (s);
}
