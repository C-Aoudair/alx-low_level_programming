#include<stdio.h>
/**
 * main - print the the even value of a fibonacci sequence.
 *
 * Return: always 0.
 */
int main(void)
{
	int m = 1;
	int n = 2;
	int k;
	long l = 2;
	int i;

	for (i = 0; i <= 4000000; i = k)
	{
		k = m + n;
		m = n;
		n = k;
		if (k % 2 == 0)
			l = l + k;
	}
	printf("%ld\n", l);
	return (0);
}
