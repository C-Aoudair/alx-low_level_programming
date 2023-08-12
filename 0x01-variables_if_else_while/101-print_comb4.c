#include<stdio.h>
/**
 * main - An entry point
 *
 * Return: When 0 (Success)
 */
int main(void)
{
int i = '0';
int j;
int k;

for (; i <= '9'; i++)
{
	j = i + 1;
	for ( ; j <= '9'; j++)
	{
		k = j + 1;
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
	}
}
putchar('\n');
return (0);
}
