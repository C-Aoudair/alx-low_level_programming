#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: known.
 * @argv: known.
 *
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
