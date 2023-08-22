#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to integer.
 * @s: the string to be converted.
 *
 * Return: the integet to convert to.
 */
int _atoi(char *s)
{
        int i = 0;
        int res = 0;
       	while (1)
	{
		if (s[i] >= '\0')
			return 0;
		i++;
	}
        return (res);
}
