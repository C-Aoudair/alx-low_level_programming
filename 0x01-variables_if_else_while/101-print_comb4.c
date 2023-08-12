#include<stdio.h>
/**
 * main - An entry point
 *
 * Return: When 0 (Success)
 */
int main(void)
{
int i;
int m = '1';
int n = '2';
int k;
int j;

for (i = '0'; i <= '9'; i++)
{
	j = m;
	for ( ; j <= '9'; j++)
	{
		k = n;
		for ( ; k <= '9'; k++)
		{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i != '7' || j != '8' || k != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	n++;
	}
	m++;
	n = m + 1;
}
putchar('\n');
return (0);
}
