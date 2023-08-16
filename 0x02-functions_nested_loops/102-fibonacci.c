#include<stdio.h>
/**
 * main - print the numbers.
 *
 * Return: always 0.
 */
int main(void)
{
	int i;
	long m = 1;
	long n = 2;
	long k;

	printf("%ld, %ld", m, n);
	for (i = 0; i < 48; i++)
	{
		k = m + n;
		m = n;
		n = k;
		printf(", %ld", k);
	}
	printf("\n");
	return (0);
}

