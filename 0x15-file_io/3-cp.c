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
	ssize_t check ;
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
	fd2 = open(argv[2], O_RDWR | O_CREAT, 00664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}
	check = read(fd1, buf, 1024);
	if (check == 0 || check == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	check = write(fd2, buf, check);
	if (check == 0 || check == -1)
	{
		 dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		 exit(99);
	}
	if (close(fd1))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
