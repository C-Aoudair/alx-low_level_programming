#include<stdio.h>
/**
 * main - the main programm.
 *
 * Return: always 0.
 */
int main(void)
{
	long k = 612852475143;
	int i;
	long max = 2;

	for (i = 2; i <= k; i++)
	{
		if (k % i == 0)
		{
			k = k / i;
			if (i > max)
				max = i;
			i = 2;
		}
	}
	printf("%ld\n", max);
	return (0);
}
