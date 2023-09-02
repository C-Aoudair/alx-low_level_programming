#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: The size of argv.
 * @argv: An array of a strings that containes cl arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 0)
		printf("%s\n", argv[argc]);
	printf("%i\n", argc - 1);
	return (0);
}
