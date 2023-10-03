#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with read and write permissions for the owner.
 * @filename: The name of the file.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	write(fd, text_content, strlen(text_content));
	return (1);
}
