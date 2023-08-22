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
        int i = 0, j, k, n, m, l;
        int res = 0;

        for (i = 0; s[i] <= '0' || s[i] >= '9' ; i++)
        {
                if ((s[i] = '\0'))
                {
                        return 1;
                        j = i + 1;
                        do
                        {
                                i++;
  }
                        while (s[i] >= '0' || s[i] <= '9');
                        if (j != i)
                        {
                                for (k = j; k < i; k++)
                                {
                                        n = (i - j - 1);
                                        for (l = 0; l <= 9; l++)
                                        {
                                                if ((s[k] = '0' + l))
                                                        m = l;
                                        }
                                        res = res + m * (10 ^ n);
                                        n--;
                                }
                        }
                }
        }
        return (res);
}
