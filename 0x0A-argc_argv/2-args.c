#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: The size of argv.
 * @argv: It known.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
