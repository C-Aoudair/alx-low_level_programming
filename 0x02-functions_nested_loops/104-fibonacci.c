#include<stdio.h>
/**
 * main - print the numbers.
 *
 * Return: always 0.
 */
int main(void)
{
	int i;
	unsigned long m = 1;
	unsigned long n = 2;
	unsigned long k;

	printf("%lu, %lu", m, n);
	for (i = 0; i < 96; i++)
	{
		k = m + n;
		m = n;
		n = k;
		printf(", %lu", k);
	}
	printf(", \n");
	return (0);
}
