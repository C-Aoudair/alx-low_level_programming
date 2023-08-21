#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: the string.
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int j, k;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = j / 2;
	for (i = 0; i <= k; i++)
	{
		tmp = s[i];
		s[i] = s[j - i];
		s[j - i] = tmp;
	}
}



