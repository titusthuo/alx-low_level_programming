#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t d;
	ssize_t s;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	s = read(fd, buffer, letters);
	d = write(STDOUT_FILENO, buffer, s);

	free(buffer);
	close(fd);
	return (d);
}
