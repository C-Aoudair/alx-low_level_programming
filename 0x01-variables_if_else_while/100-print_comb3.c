#include<stdio.h>
/**
 * main - An entry point
 *
 * Return: When 0 (Success)
 */
int main(void)
{
int i;
int m = '0';
int j;

for (i = '0'; i <= '9'; i++)
{
	j = m;
	for ( ; j <= '9'; j++)
	{
		if (i != j)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	m++;
}
putchar('\n');
return (0);
}
