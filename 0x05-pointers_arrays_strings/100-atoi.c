#include "main.h"
/**
 * _pow - get m power n.
 * @m: the base.
 * @n: the power.
 *
 * Return: The power of m.
 */
int _pow(int m, int n)
{
	int res;
	int i;

	res = 1;
	for (i = 0; i < n; i++)
		res = res * m;
	return (res);
}
/**
 * _atoi - convert a string to integer.
 * @s: the string to be converted.
 *
 * Return: the integet to convert to.
 */
int _atoi(char *s)
{
	int i, j, n;
	unsigned int res;
	int digit;
	int test;
	int sign;

	res = 0;
	sign = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		test = i;
		if (s[i] == '-')
			sign = sign + 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			j = i;
		for ( ; s[j] >= '0' && s[j] <= '9'; j++)
		{
		}
			for ( ; i < j; i++)
			{
				for (n = 0; n <= 9; n++)
				{
					if (s[i] == '0' + n)
					{
						digit = n;
						break;
					}
				}
				res = res + digit * _pow(10, j - i - 1);
			}
		}
		if (test != i)
		{
			if (sign % 2)
				return (-res);
			return (res);
		}
	}
	return (0);
}
