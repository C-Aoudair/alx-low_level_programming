#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - perferms a simple operators.
 * @argc: the number of commond line arguments.
 * @argv: The command line arguments.
 *
 * Return: 0 if secceed.
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", res);
	return (0);
}
