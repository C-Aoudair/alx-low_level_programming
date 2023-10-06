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

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	do {
		check1 = read(fd1, buf, 1024);
		if (check1 == 0 || check1 == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fd2 = open(argv[2], O_APPEND |O_RDWR | O_CREAT, 00664);
		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
			exit(99);
		}
		check2 = write(fd2, buf, check1);
		if (check2 == 0 || check2 == -1)
		{
			 dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
			 exit(99);
		}
		if (close(fd2))
		{
			dprintf(2, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
		printf("I was here\n");
	} while (check1 == 1024);
	if (close(fd1))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
