#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: The neme of the file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print or 0 in errors.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void *buf;
	ssize_t size;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	size = read(fd, buf, letters);
	close(fd);
	write(STDOUT_FILENO, buf, size);
	free(buf);
	return (size);
}

