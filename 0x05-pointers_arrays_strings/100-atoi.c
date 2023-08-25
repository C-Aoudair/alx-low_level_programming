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
	int j, k, l, m, n;
	int res;

       	while (1)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			j = i;
			while (1)
			{
				if (s[i] < '0' || s[i] > '9')
					break;
				i++;
			}
			n = (i - j -1);
			for (k = j; k < i; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if ((s[k] == '0' + l))
						m = i;
				}
				res = res + m * (10 ^ n);
				n--;
			}
			return (res);
		}
		i++;
	}
}
