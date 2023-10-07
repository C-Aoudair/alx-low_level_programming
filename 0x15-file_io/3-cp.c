#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - copies the content of a file to another file.
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 *
 * Return: 0 on succeed otherwise it drpents on the situation.
 */
int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t check1, check2;
	char buf[1024];
	char *Usage = "Usage: cp file_from file_to";
	char *Error1 = "Error: Can't read from file ";
	char *Error2 = "Error: Can't write to ";
	char *Error3 = "Error: Can't close fd ";

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", Usage), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);

	do {
		check1 = read(fd1, buf, 1024);
		if (check1 == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", Error1, argv[1]);
			exit(98);
		}
		check2 = write(fd2, buf, check1);
		if (check2 == -1)
		{
			 dprintf(STDERR_FILENO, "%s%s\n", Error2, argv[2]);
			 exit(99);
		}
	} while (check1 == 1024);

	if (close(fd2))
		dprintf(2, "%s%d\n", Error3, fd2), exit(100);
	if (close(fd1))
		dprintf(2, "%s%d\n", Error3, fd1), exit(100);
	return (0);
}
